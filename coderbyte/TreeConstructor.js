/*
[link](https://coderbyte.com/editor/Tree%20Constructor:JavaScript)

Tree Constructor
Have the function TreeConstructor(strArr) take the array of strings stored in strArr, which will contain pairs of integers in the following format: (i1,i2), where i1 represents a child node in a tree and the second integer i2 signifies that it is the parent of i1. For example: if strArr is ["(1,2)", "(2,4)", "(7,2)"], then this forms the following tree:


which you can see forms a proper binary tree. Your program should, in this case, return the string true because a valid binary tree can be formed. If a proper binary tree cannot be formed with the integer pairs, then return the string false. All of the integers within the tree will be unique, which means there can only be one node in the tree with the given integer value.
Examples
Input: ["(1,2)", "(2,4)", "(5,7)", "(7,2)", "(9,5)"]
Output: true
Input: ["(1,2)", "(3,2)", "(2,12)", "(5,2)"]
Output: false

*/


/*
  solution:
*/


function TreeConstructor(strArr) {
	let log = console.log;
	log(
		"strArr",
		strArr.map((a) => a.match(/[0-9]+/g))
	);
	let nodeArr = strArr.map((a) => a.match(/[0-9]+/g).map((a) => Number(a))); // [[1,2],[2,4],[7,2]]
	let result = 0;

	let node = {
		value: 0,
		left: null,
		right: null,
		parent: null,
	};

	function newNode(v, l, r, p) {
		let n = Object.create(node);
		n.value = v;
		n.left = l;
		n.right = r;
		n.parent = p;
		return n;
	}
	function findNode(v, arr) {
		for (let i = 0, max = arr.length; i < max; i++) {
			if (arr[i].value === v) return arr[i];
		}
		return null;
	}

	let setNode = new Set();
	for (let i = 0, max = nodeArr.length; i < max; i++) {
		setNode.add(nodeArr[i][0]);
		setNode.add(nodeArr[i][1]);
	}
	setNode = [...setNode];

	let treeNode = [];
	for (let i = 0, max = setNode.length; i < max; i++) {
		let v = setNode[i];
		treeNode.push(newNode(v, null, null, null));
	}

	for (let i = 0, max = nodeArr.length; i < max; i++) {
		let n = nodeArr[i];
		let ch = findNode(n[0], treeNode);
		let pa = findNode(n[1], treeNode);
		ch.parent = pa;

		if (pa.value < ch.value) {
			pa.right = ch;
		} else if (pa.value > ch.value) {
			pa.left = ch;
		} else if (pa.right !== null && pa.left !== null) {
			result = false;
			return result;
		}
	}

	// find root
	let root = null;
	// rootCnt is for checking if there is more than one root
	let rootCnt = 0;
	for (let i = 0, max = treeNode.length; i < max; i++) {
		if (treeNode[i].parent === null) {
			root = treeNode[i];
			rootCnt += 1;
		}
	}

	if (rootCnt >= 2) {
		return false;
	}

	// traverse
	let traverseNode = [];
	function traverse(n) {
		if (n === null) return;
		traverseNode.push(n.value);
		traverse(n.left);
		traverse(n.right);
	}
	traverse(root);

	traverseNode.sort((a, b) => a - b);
	setNode.sort((a, b) => a - b);
	// code goes here
	return traverseNode.join("") === setNode.join("");
}

// keep this function call here
console.log(TreeConstructor(["(1,2)", "(2,4)", "(5,7)", "(7,2)", "(9,5)"])); // return true
console.log(TreeConstructor(["(1,2)", "(3,2)", "(2,12)", "(5,2)"])); // return false
