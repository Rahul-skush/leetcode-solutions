<h2><a href="https://leetcode.com/problems/recover-binary-search-tree/">99. Recover Binary Search Tree</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given the <code style="user-select: auto;">root</code> of a binary search tree (BST), where the values of <strong style="user-select: auto;">exactly</strong> two nodes of the tree were swapped by mistake. <em style="user-select: auto;">Recover the tree without changing its structure</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/10/28/recover1.jpg" style="width: 422px; height: 302px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> root = [1,3,null,null,2]
<strong style="user-select: auto;">Output:</strong> [3,1,null,null,2]
<strong style="user-select: auto;">Explanation:</strong> 3 cannot be a left child of 1 because 3 &gt; 1. Swapping 1 and 3 makes the BST valid.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/10/28/recover2.jpg" style="width: 581px; height: 302px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> root = [3,1,4,null,null,2]
<strong style="user-select: auto;">Output:</strong> [2,1,4,null,null,3]
<strong style="user-select: auto;">Explanation:</strong> 2 cannot be in the right subtree of 3 because 2 &lt; 3. Swapping 2 and 3 makes the BST valid.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">The number of nodes in the tree is in the range <code style="user-select: auto;">[2, 1000]</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">-2<sup style="user-select: auto;">31</sup> &lt;= Node.val &lt;= 2<sup style="user-select: auto;">31</sup> - 1</code></li>
</ul>

<p style="user-select: auto;">&nbsp;</p>
<strong style="user-select: auto;">Follow up:</strong> A solution using <code style="user-select: auto;">O(n)</code> space is pretty straight-forward. Could you devise a constant <code style="user-select: auto;">O(1)</code> space solution?</div>