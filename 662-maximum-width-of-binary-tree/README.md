<h2><a href="https://leetcode.com/problems/maximum-width-of-binary-tree/">662. Maximum Width of Binary Tree</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given the <code style="user-select: auto;">root</code> of a binary tree, return <em style="user-select: auto;">the <strong style="user-select: auto;">maximum width</strong> of the given tree</em>.</p>

<p style="user-select: auto;">The <strong style="user-select: auto;">maximum width</strong> of a tree is the maximum <strong style="user-select: auto;">width</strong> among all levels.</p>

<p style="user-select: auto;">The <strong style="user-select: auto;">width</strong> of one level is defined as the length between the end-nodes (the leftmost and rightmost non-null nodes), where the null nodes between the end-nodes are also counted into the length calculation.</p>

<p style="user-select: auto;">It is <strong style="user-select: auto;">guaranteed</strong> that the answer will in the range of <strong style="user-select: auto;">32-bit</strong> signed integer.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/05/03/width1-tree.jpg" style="width: 359px; height: 302px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> root = [1,3,2,5,3,null,9]
<strong style="user-select: auto;">Output:</strong> 4
<strong style="user-select: auto;">Explanation:</strong> The maximum width existing in the third level with the length 4 (5,3,null,9).
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/05/03/width2-tree.jpg" style="width: 224px; height: 302px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> root = [1,3,null,5,3]
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation:</strong> The maximum width existing in the third level with the length 2 (5,3).
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/05/03/width3-tree.jpg" style="width: 289px; height: 299px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> root = [1,3,2,5]
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation:</strong> The maximum width existing in the second level with the length 2 (3,2).
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">The number of nodes in the tree is in the range <code style="user-select: auto;">[1, 3000]</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">-100 &lt;= Node.val &lt;= 100</code></li>
</ul>
</div>