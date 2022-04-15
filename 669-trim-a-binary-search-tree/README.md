<h2><a href="https://leetcode.com/problems/trim-a-binary-search-tree/">669. Trim a Binary Search Tree</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given the <code style="user-select: auto;">root</code> of a binary search tree and the lowest and highest boundaries as <code style="user-select: auto;">low</code> and <code style="user-select: auto;">high</code>, trim the tree so that all its elements lies in <code style="user-select: auto;">[low, high]</code>. Trimming the tree should <strong style="user-select: auto;">not</strong> change the relative structure of the elements that will remain in the tree (i.e., any node's descendant should remain a descendant). It can be proven that there is a <strong style="user-select: auto;">unique answer</strong>.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the root of the trimmed binary search tree</em>. Note that the root may change depending on the given bounds.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/09/09/trim1.jpg" style="width: 450px; height: 126px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> root = [1,0,2], low = 1, high = 2
<strong style="user-select: auto;">Output:</strong> [1,null,2]
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/09/09/trim2.jpg" style="width: 450px; height: 277px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> root = [3,0,4,null,2,null,null,1], low = 1, high = 3
<strong style="user-select: auto;">Output:</strong> [3,2,null,1]
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">The number of nodes in the tree in the range <code style="user-select: auto;">[1, 10<sup style="user-select: auto;">4</sup>]</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= Node.val &lt;= 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;">The value of each node in the tree is <strong style="user-select: auto;">unique</strong>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">root</code> is guaranteed to be a valid binary search tree.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= low &lt;= high &lt;= 10<sup style="user-select: auto;">4</sup></code></li>
</ul>
</div>