class WeightedQuickUnion {
  constructor(size) {
    this.parent = new Array(size);
    this.size = new Array(size);
    for (let i = 0; i < size; i++) {
      this.parent[i] = i;
      this.size[i] = 1;
    }
  }
  root(i) {
    // root occurs when the element i is equal to it's value parent[i]
    while (this.parent[i] !== i) {
      // path compression make the element point to it's grandparent
      this.parent[i] = this.parent[this.parent[i]];
      i = this.parent[i];
    }
    return i;
  }
  connected(p, q) {
    return this.root(q) === this.root(p);
  }
  union(p, q) {
    let rootP = this.root(p);
    let rootQ = this.root(q);
    if (rootP !== rootQ) {
      if (this.size[rootP] < this.size[rootQ]) {
        this.parent[rootP] = rootQ;
        this.size[rootQ] += this.size[rootP];
      } else {
        this.parent[rootQ] = rootP;
        this.size[rootP] += this.size[rootQ];
      }
    }
  }
}

// Example Usage:
const wqu = new WeightedQuickUnion(10);
wqu.union(4, 3);
wqu.union(3, 8);
wqu.union(6, 5);
wqu.union(9, 4);
wqu.union(2, 1);
console.log(wqu.connected(8, 9)); // Output: true
console.log(wqu.connected(5, 0)); // Output: false
wqu.union(5, 0);
wqu.union(7, 2);
wqu.union(6, 1);
console.log(wqu.connected(0, 7)); // Output: true
