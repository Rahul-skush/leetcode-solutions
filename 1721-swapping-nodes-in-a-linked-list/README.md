<h2><a href="https://leetcode.com/problems/swapping-nodes-in-a-linked-list/">1721. Swapping Nodes in a Linked List</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given the <code style="user-select: auto;">head</code> of a linked list, and an integer <code style="user-select: auto;">k</code>.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the head of the linked list after <strong style="user-select: auto;">swapping</strong> the values of the </em><code style="user-select: auto;">k<sup style="user-select: auto;">th</sup></code> <em style="user-select: auto;">node from the beginning and the </em><code style="user-select: auto;">k<sup style="user-select: auto;">th</sup></code> <em style="user-select: auto;">node from the end (the list is <strong style="user-select: auto;">1-indexed</strong>).</em></p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/09/21/linked1.jpg" style="width: 400px; height: 112px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> head = [1,2,3,4,5], k = 2
<strong style="user-select: auto;">Output:</strong> [1,4,3,2,5]
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> head = [7,9,6,6,7,8,3,0,9,5], k = 5
<strong style="user-select: auto;">Output:</strong> [7,9,6,6,8,7,3,0,9,5]
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">The number of nodes in the list is <code style="user-select: auto;">n</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= k &lt;= n &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= Node.val &lt;= 100</code></li>
</ul>
</div>