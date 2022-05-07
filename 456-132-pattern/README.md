<h2><a href="https://leetcode.com/problems/132-pattern/">456. 132 Pattern</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given an array&nbsp;of <code style="user-select: auto;">n</code> integers <code style="user-select: auto;">nums</code>, a <strong style="user-select: auto;">132 pattern</strong> is a subsequence of three integers <code style="user-select: auto;">nums[i]</code>, <code style="user-select: auto;">nums[j]</code> and <code style="user-select: auto;">nums[k]</code> such that <code style="user-select: auto;">i &lt; j &lt; k</code> and <code style="user-select: auto;">nums[i] &lt; nums[k] &lt; nums[j]</code>.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;"><code style="user-select: auto;">true</code> if there is a <strong style="user-select: auto;">132 pattern</strong> in <code style="user-select: auto;">nums</code>, otherwise, return <code style="user-select: auto;">false</code>.</em></p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [1,2,3,4]
<strong style="user-select: auto;">Output:</strong> false
<strong style="user-select: auto;">Explanation:</strong> There is no 132 pattern in the sequence.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [3,1,4,2]
<strong style="user-select: auto;">Output:</strong> true
<strong style="user-select: auto;">Explanation:</strong> There is a 132 pattern in the sequence: [1, 4, 2].
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [-1,3,2,0]
<strong style="user-select: auto;">Output:</strong> true
<strong style="user-select: auto;">Explanation:</strong> There are three 132 patterns in the sequence: [-1, 3, 2], [-1, 3, 0] and [-1, 2, 0].
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">n == nums.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n &lt;= 2 * 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">-10<sup style="user-select: auto;">9</sup> &lt;= nums[i] &lt;= 10<sup style="user-select: auto;">9</sup></code></li>
</ul>
</div>