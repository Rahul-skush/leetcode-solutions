<h2><a href="https://leetcode.com/problems/validate-binary-tree-nodes/">1361. Validate Binary Tree Nodes</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You have <code style="user-select: auto;">n</code> binary tree nodes numbered from <code style="user-select: auto;">0</code> to <code style="user-select: auto;">n - 1</code> where node <code style="user-select: auto;">i</code> has two children <code style="user-select: auto;">leftChild[i]</code> and <code style="user-select: auto;">rightChild[i]</code>, return <code style="user-select: auto;">true</code> if and only if <strong style="user-select: auto;">all</strong> the given nodes form <strong style="user-select: auto;">exactly one</strong> valid binary tree.</p>

<p style="user-select: auto;">If node <code style="user-select: auto;">i</code> has no left child then <code style="user-select: auto;">leftChild[i]</code> will equal <code style="user-select: auto;">-1</code>, similarly for the right child.</p>

<p style="user-select: auto;">Note that the nodes have no values and that we only use the node numbers in this problem.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2019/08/23/1503_ex1.png" style="width: 195px; height: 287px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 4, leftChild = [1,-1,3,-1], rightChild = [2,-1,-1,-1]
<strong style="user-select: auto;">Output:</strong> true
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2019/08/23/1503_ex2.png" style="width: 183px; height: 272px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 4, leftChild = [1,-1,3,-1], rightChild = [2,3,-1,-1]
<strong style="user-select: auto;">Output:</strong> false
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2019/08/23/1503_ex3.png" style="width: 82px; height: 174px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 2, leftChild = [1,0], rightChild = [-1,-1]
<strong style="user-select: auto;">Output:</strong> false
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">n == leftChild.length == rightChild.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n &lt;= 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">-1 &lt;= leftChild[i], rightChild[i] &lt;= n - 1</code></li>
</ul>
</div>