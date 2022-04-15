<h2><a href="https://leetcode.com/problems/search-in-a-binary-search-tree/">700. Search in a Binary Search Tree</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given the <code style="user-select: auto;">root</code> of a binary search tree (BST) and an integer <code style="user-select: auto;">val</code>.</p>

<p style="user-select: auto;">Find the node in the BST that the node's value equals <code style="user-select: auto;">val</code> and return the subtree rooted with that node. If such a node does not exist, return <code style="user-select: auto;">null</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/01/12/tree1.jpg" style="width: 422px; height: 302px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> root = [4,2,7,1,3], val = 2
<strong style="user-select: auto;">Output:</strong> [2,1,3]
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/01/12/tree2.jpg" style="width: 422px; height: 302px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> root = [4,2,7,1,3], val = 5
<strong style="user-select: auto;">Output:</strong> []
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">The number of nodes in the tree is in the range <code style="user-select: auto;">[1, 5000]</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= Node.val &lt;= 10<sup style="user-select: auto;">7</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">root</code> is a binary search tree.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= val &lt;= 10<sup style="user-select: auto;">7</sup></code></li>
</ul>
</div>