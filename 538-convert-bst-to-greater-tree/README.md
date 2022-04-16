<h2><a href="https://leetcode.com/problems/convert-bst-to-greater-tree/">538. Convert BST to Greater Tree</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given the <code style="user-select: auto;">root</code> of a Binary Search Tree (BST), convert it to a Greater Tree such that every key of the original BST is changed to the original key plus the sum of all keys greater than the original key in BST.</p>

<p style="user-select: auto;">As a reminder, a <em style="user-select: auto;">binary search tree</em> is a tree that satisfies these constraints:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">The left subtree of a node contains only nodes with keys <strong style="user-select: auto;">less than</strong> the node's key.</li>
	<li style="user-select: auto;">The right subtree of a node contains only nodes with keys <strong style="user-select: auto;">greater than</strong> the node's key.</li>
	<li style="user-select: auto;">Both the left and right subtrees must also be binary search trees.</li>
</ul>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2019/05/02/tree.png" style="width: 500px; height: 341px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> root = [4,1,6,0,2,5,7,null,null,null,3,null,null,null,8]
<strong style="user-select: auto;">Output:</strong> [30,36,21,36,35,26,15,null,null,null,33,null,null,null,8]
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> root = [0,null,1]
<strong style="user-select: auto;">Output:</strong> [1,null,1]
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">The number of nodes in the tree is in the range <code style="user-select: auto;">[0, 10<sup style="user-select: auto;">4</sup>]</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">-10<sup style="user-select: auto;">4</sup> &lt;= Node.val &lt;= 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;">All the values in the tree are <strong style="user-select: auto;">unique</strong>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">root</code> is guaranteed to be a valid binary search tree.</li>
</ul>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Note:</strong> This question is the same as 1038: <a href="https://leetcode.com/problems/binary-search-tree-to-greater-sum-tree/" target="_blank" style="user-select: auto;">https://leetcode.com/problems/binary-search-tree-to-greater-sum-tree/</a></p>
</div>