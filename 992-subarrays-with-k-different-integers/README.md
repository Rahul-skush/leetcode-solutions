<h2><a href="https://leetcode.com/problems/subarrays-with-k-different-integers/">992. Subarrays with K Different Integers</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given an integer array <code style="user-select: auto;">nums</code> and an integer <code style="user-select: auto;">k</code>, return <em style="user-select: auto;">the number of <strong style="user-select: auto;">good subarrays</strong> of </em><code style="user-select: auto;">nums</code>.</p>

<p style="user-select: auto;">A <strong style="user-select: auto;">good array</strong> is an array where the number of different integers in that array is exactly <code style="user-select: auto;">k</code>.</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">For example, <code style="user-select: auto;">[1,2,3,1,2]</code> has <code style="user-select: auto;">3</code> different integers: <code style="user-select: auto;">1</code>, <code style="user-select: auto;">2</code>, and <code style="user-select: auto;">3</code>.</li>
</ul>

<p style="user-select: auto;">A <strong style="user-select: auto;">subarray</strong> is a <strong style="user-select: auto;">contiguous</strong> part of an array.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [1,2,1,2,3], k = 2
<strong style="user-select: auto;">Output:</strong> 7
<strong style="user-select: auto;">Explanation:</strong> Subarrays formed with exactly 2 different integers: [1,2], [2,1], [1,2], [2,3], [1,2,1], [2,1,2], [1,2,1,2]
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [1,2,1,3,4], k = 3
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation:</strong> Subarrays formed with exactly 3 different integers: [1,2,1,3], [2,1,3], [1,3,4].
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums.length &lt;= 2 * 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums[i], k &lt;= nums.length</code></li>
</ul>
</div>