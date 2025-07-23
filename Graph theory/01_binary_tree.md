# 1. Binary Tree

## 🌳 What is a Binary Tree?

A **Binary Tree** is a tree data structure in which each node has at most **two children**, referred to as the **left child** and the **right child**.

```
   1
  / \
 2   3
/ \
4   5 
```

- Each node stores a value and links to two child nodes (or `null` if no child).
- It's not necessarily sorted (unlike Binary Search Trees).

---

## 🌱 Types of Binary Tree

### 1. Full Binary Tree

Every node has either **0 or 2 children**.

```
        1
      /   \
     2     3
    / \   / \
   4   5 6   7
```

---

### 2. Complete Binary Tree

All levels are completely filled **except possibly the last**, which is filled from **left to right**.

```
        1
      /   \
     2     3
    / \   / 
   4   5 6   
```

---

### 3. Perfect Binary Tree

All internal nodes have **two children**, and all leaves are at the **same level**.

```
        1
      /   \
     2     3
    / \   / \
   4   5 6   7
```

---

### 4. Balanced Binary Tree

The height difference between left and right subtrees is **at most 1** at every node.

```
        1
      /   \
     2     3
    /       \
   4         5
```

---

### 5. Degenerate (Skewed) Tree

Each parent has only one child — forms a **linked list** shape.

#### Left Skewed

```
    1
   /
  2
 /
3
```

#### Right Skewed

```
1
 \
  2
   \
    3
```

---

## 🔁 Binary Tree Traversal Types

### Depth-First Search (DFS)

- **Inorder**: Left → Root → Right  
- **Preorder**: Root → Left → Right  
- **Postorder**: Left → Right → Root  

### Breadth-First Search (BFS)

- **Level Order Traversal**: Visit nodes level by level from top to bottom.

---

## ✍️ Inorder Traversal Example (javascript)

```javascript
function inorder(root) {
  if (!root) return;
  inorder(root.left);
  console.log(root.val);
  inorder(root.right);
}
```

```javascript
class TreeNode {
  constructor(val, left = null, right = null) {
    this.val = val;
    this.left = left;
    this.right = right;
  }
}

// Example usage:
const root = new TreeNode(1);
root.left = new TreeNode(2, new TreeNode(4), new TreeNode(5));
root.right = new TreeNode(3);

inorder(root); // Output: 4, 2, 5, 1, 3


```

```javascript

Let's simulate the recursive call stack for the inorder(root) traversal of the following binary tree:

🌳 Tree Structure:
markdown
Copy
Edit
        1
       / \
      2   3
     / \
    4   5
🧠 Inorder Traversal Rule:
Left → Root → Right

📦 Step-by-Step Recursion Simulation:
Call Stack (Top = Current)	Action	Output
inorder(1)	go left to inorder(2)	
inorder(2)	go left to inorder(4)	
inorder(4)	go left to inorder(null)	
base case hit	return	
inorder(4) resumes	console.log(4)	4
inorder(4)	go right to inorder(null)	
base case hit	return	
inorder(2) resumes	console.log(2)	2
inorder(2)	go right to inorder(5)	
inorder(5)	go left to inorder(null)	
base case hit	return	
inorder(5) resumes	console.log(5)	5
inorder(5)	go right to inorder(null)	
base case hit	return	
inorder(1) resumes	console.log(1)	1
inorder(1)	go right to inorder(3)	
inorder(3)	go left to inorder(null)	
base case hit	return	
inorder(3) resumes	console.log(3)	3
inorder(3)	go right to inorder(null)	
base case hit	return	

✅ Final Output (console logs):
Copy
Edit
4
2
5
1
3
This matches Left → Root → Right traversal for every node:

Subtree of 2: 4 2 5

Root: 1

Right subtree: 3


```

---

## 📌 Practice Problems


- [X] [Leetcode 94 – Binary Tree Inorder Traversal](https://leetcode.com/problems/binary-tree-inorder-traversal)
- [ ] [Leetcode 104 – Maximum Depth of Binary Tree](https://leetcode.com/problems/maximum-depth-of-binary-tree)
- [ ] [Leetcode 226 – Invert Binary Tree](https://leetcode.com/problems/invert-binary-tree)
- [ ] [Leetcode 102 – Binary Tree Level Order Traversal](https://leetcode.com/problems/binary-tree-level-order-traversal)
- [ ] [Leetcode 101 – Symmetric Tree](https://leetcode.com/problems/symmetric-tree)

---

## ✅ Notes

- Binary Trees are foundational in:
  - Expression Trees
  - Binary Search Trees (BST)
  - Heaps
  - Huffman Encoding Trees

- Tree traversal is critical in:
  - Serialization / Deserialization
  - Searching
  - Building interpreters & compilers
