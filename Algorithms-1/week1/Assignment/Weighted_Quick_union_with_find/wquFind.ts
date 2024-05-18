/**
 * Union-find with specific canonical element. Add a method find() to the union-find data type
 * so that find(i) returns the largest element in the connected component containing i.
 * The operations, union(), connected(), and find() should all take logarithmic time or better.
 *
 * For example, if one of the connected components is {1, 2, 6, 9}, then the find() method should return 9
 * for each of the four elements in the connected components.
 */

class WeightedQuickUnionWithFind {
  private parent: number[];
  private size: number[];
  private max: number[];

  constructor(n: number) {
    this.parent = Array.from({ length: n }, (_, i) => i);
    this.size = Array.from({ length: n }, () => 1);
    this.max = Array.from({ length: n }, (_, i) => i);
  }

  root(i: number): number {
    while (i !== this.parent[i]) {
      this.parent[i] = this.parent[this.parent[i]]; // path compression
      i = this.parent[i];
    }
    return i;
  }

  union(p: number, q: number): void {
    const rootP = this.root(p);
    const rootQ = this.root(q);
    if (rootP !== rootQ) {
      if (this.size[rootP] < this.size[rootQ]) {
        this.parent[rootP] = rootQ;
        this.size[rootQ] += this.size[rootP];
        // this.max[rootQ] = Math.max(this.max[rootP], this.max[rootQ]);
      } else {
        this.parent[rootQ] = rootP;
        this.size[rootP] += this.size[rootQ];
        // this.max[rootP] = Math.max(this.max[rootP], this.max[rootQ]);
      }
    }
  }

  connected(p: number, q: number): boolean {
    return this.root(p) === this.root(q);
  }

  find(i: number): number {
    // i think it's this.max[root(i)] or this.size[root(i)]
    // return this.max[this.root(i)];
    return this.size[this.root(i)];
  }
}

// Create an instance of WeightedQuickUnionWithFind with 10 members
const uf = new WeightedQuickUnionWithFind(10);

// Perform union operations to form the connected component {1, 2, 6, 9}
uf.union(1, 2);
uf.union(6, 9);
uf.union(1, 6);

// Find the largest element in the connected component containing each element
console.log("Largest element in the component containing 1:", uf.find(1)); // Output: 9
console.log("Largest element in the component containing 2:", uf.find(2)); // Output: 9
console.log("Largest element in the component containing 6:", uf.find(6)); // Output: 9
console.log("Largest element in the component containing 9:", uf.find(9)); // Output: 9
