//*****  Not Optimal time complexity O(n^2)  for good for large n *****
class QuickFind {
  //   array of ids and the entries is equal to index of the array
  //   indexes represent each element
  //   Two elements is connected if they have the same id
  constructor(n) {
    this.ids = new Array(n);
    for (let i = 0; i < n; i++) {
      this.ids[i] = i;
    }
  }

  connected(p, q) {
    const pid = this.ids[p];
    const qid = this.ids[q];
    return pid === qid;
  }

  //if we want to connect two elements we will make all elements that is connected to the first element connected to the second
  union(p, q) {
    const pid = this.ids[p];
    const qid = this.ids[q];
    for (let i = 0; i < this.ids.length; i++) {
      if (this.ids[i] === pid) {
        this.ids[i] = qid;
      }
    }
  }
}
// === usage ===
const qf = new QuickFind(10);
qf.union(4, 3);
qf.union(3, 8);
qf.union(6, 5);

// |0|1|2|3|4|5|6|7|8|9|
// |0|1|2|3|4|5|6|7|8|9|
// union(4, 3)
// |0|1|2|3|3|5|6|7|8|9|
// union(3, 8)
// |0|1|2|8|8|5|6|7|8|9|
// union(6, 5)
// |0|1|2|8|8|5|5|7|8|9|

console.log(qf.connected(4, 8));
console.log(qf.connected(1, 2));
