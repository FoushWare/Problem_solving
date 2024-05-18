/**
 * Social network connectivity. Given a social network containing 𝑛 members and a log file containing 𝑚
 * timestamps at which times pairs of members formed friendships,
 * design an algorithm to determine the earliest time at which all members are connected
 * (i.e., every member is a friend of a friend of a friend ... of a friend).
 * Assume that the log file is sorted by timestamp and that friendship is an equivalence relation.
 * The running time of your algorithm should be 𝑚 log or better
 */
class WeightedQuickUnion {
  private parent: number[];
  private size: number[];
  private components: number;

  constructor(n: number) {
    this.parent = Array.from({ length: n }, (_, i) => i);
    this.size = Array.from({ length: n }, () => 1);
    this.components = n;
  }

  public getComponentCount(): number {
    return this.components;
  }

  public root(i: number): number {
    while (i !== this.parent[i]) {
      this.parent[i] = this.parent[this.parent[i]]; // path compression
      i = this.parent[i];
    }
    return i;
  }

  public union(p: number, q: number): boolean {
    let rootP = this.root(p);
    let rootQ = this.root(q);
    if (rootP !== rootQ) {
      if (this.size[rootP] < this.size[rootQ]) {
        // put p under q
        this.parent[rootP] = rootQ;
        this.size[rootQ] += this.size[rootP];
      } else {
        // put q under p
        this.parent[rootQ] = rootP;
        this.size[rootP] += this.size[rootQ];
      }
      this.components--;
      return true;
    }
    return false;
  }

  public connected(p: number, q: number): boolean {
    return this.root(p) === this.root(q);
  }
}

const findEarliestAllConnected = (
  n: number,
  logs: [number, number, number][]
): number | null => {
  const wqu = new WeightedQuickUnion(n);
  for (const [time, p, q] of logs) {
    if (wqu.union(p, q) && wqu.getComponentCount() === 1) {
      return time;
    }
  }
  return null;
};

const n: number = 5;
// Example log data: [timestamp, person1, person2]
const logs: [number, number, number][] = [
  [1, 0, 2],
  [2, 3, 4],
  [3, 2, 4],
  [4, 1, 3],
  [5, 0, 4],
];
// 0-> 2 3->4 2->4 1->3 0->4

console.log("Earliest connected time:", findEarliestAllConnected(n, logs));
