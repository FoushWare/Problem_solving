/**
 * Social network connectivity. Given a social network containing 𝑛 members and a log file containing 𝑚
 * timestamps at which times pairs of members formed friendships,
 * design an algorithm to determine the earliest time at which all members are connected
 * (i.e., every member is a friend of a friend of a friend ... of a friend).
 * Assume that the log file is sorted by timestamp and that friendship is an equivalence relation.
 * The running time of your algorithm should be 𝑚 log or better
 *
 */
class weightedQuickUnion {
  constructor() {}
  getComponentCount() {}
  root(i) {}
  union(p, q) {}
  connected(p, q) {}
}

const findEarliestAllConnected = (n, log) => {
  // Write your code here
};

const n = 5;
// Example log data: [timestamp, person1, person2]
const logs = [
  [1, 0, 2],
  [2, 3, 4],
  [3, 2, 4],
  [4, 1, 3],
  [5, 0, 4],
];
// 0-> 2 3->4 2->4 1->3 0->4

console.log("Earliest connected time:", findEarliestAllConnected(n, log));
