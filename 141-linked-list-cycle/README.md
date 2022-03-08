<h2><a href="https://leetcode.com/problems/linked-list-cycle/">141. Linked List Cycle</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given <code style="user-select: auto;">head</code>, the head of a linked list, determine if the linked list has a cycle in it.</p>

<p style="user-select: auto;">There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the&nbsp;<code style="user-select: auto;">next</code>&nbsp;pointer. Internally, <code style="user-select: auto;">pos</code>&nbsp;is used to denote the index of the node that&nbsp;tail's&nbsp;<code style="user-select: auto;">next</code>&nbsp;pointer is connected to.&nbsp;<strong style="user-select: auto;">Note that&nbsp;<code style="user-select: auto;">pos</code>&nbsp;is not passed as a parameter</strong>.</p>

<p style="user-select: auto;">Return&nbsp;<code style="user-select: auto;">true</code><em style="user-select: auto;"> if there is a cycle in the linked list</em>. Otherwise, return <code style="user-select: auto;">false</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2018/12/07/circularlinkedlist.png" style="width: 300px; height: 97px; margin-top: 8px; margin-bottom: 8px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> head = [3,2,0,-4], pos = 1
<strong style="user-select: auto;">Output:</strong> true
<strong style="user-select: auto;">Explanation:</strong> There is a cycle in the linked list, where the tail connects to the 1st node (0-indexed).
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2018/12/07/circularlinkedlist_test2.png" style="width: 141px; height: 74px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> head = [1,2], pos = 0
<strong style="user-select: auto;">Output:</strong> true
<strong style="user-select: auto;">Explanation:</strong> There is a cycle in the linked list, where the tail connects to the 0th node.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2018/12/07/circularlinkedlist_test3.png" style="width: 45px; height: 45px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> head = [1], pos = -1
<strong style="user-select: auto;">Output:</strong> false
<strong style="user-select: auto;">Explanation:</strong> There is no cycle in the linked list.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">The number of the nodes in the list is in the range <code style="user-select: auto;">[0, 10<sup style="user-select: auto;">4</sup>]</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">-10<sup style="user-select: auto;">5</sup> &lt;= Node.val &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">pos</code> is <code style="user-select: auto;">-1</code> or a <strong style="user-select: auto;">valid index</strong> in the linked-list.</li>
</ul>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Follow up:</strong> Can you solve it using <code style="user-select: auto;">O(1)</code> (i.e. constant) memory?</p>
</div>