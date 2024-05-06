class QuickUnion {
  constructor(n) {
    this.ids = new Array(n);
    for (let i = 0; i < n; i++) {
      this.ids[i] = i;
    }
  }
  //   finding the root of a component
  root(i) {
    while (this.ids[i] !== i) {
      i = this.ids[i];
    }
    return i;
  }
  connected(p, q) {
    return this.root(p) === this.root(q);
  }
  union(p, q) {
    const rootp = this.root(p);
    const rootq = this.root(q);
    this.ids[rootp] = this.ids[rootq];
  }
}
// usage
const qu = new QuickUnion(10);
qu.union(4, 3);
qu.union(3, 8);
qu.union(6, 5);
console.log(qu.connected(4, 8));
console.log(qu.connected(1, 2));
