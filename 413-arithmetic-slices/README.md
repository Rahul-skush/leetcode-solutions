<h2><a href="https://leetcode.com/problems/arithmetic-slices/">413. Arithmetic Slices</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">An integer array is called arithmetic if it consists of <strong style="user-select: auto;">at least three elements</strong> and if the difference between any two consecutive elements is the same.</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">For example, <code style="user-select: auto;">[1,3,5,7,9]</code>, <code style="user-select: auto;">[7,7,7,7]</code>, and <code style="user-select: auto;">[3,-1,-5,-9]</code> are arithmetic sequences.</li>
</ul>

<p style="user-select: auto;">Given an integer array <code style="user-select: auto;">nums</code>, return <em style="user-select: auto;">the number of arithmetic <strong style="user-select: auto;">subarrays</strong> of</em> <code style="user-select: auto;">nums</code>.</p>

<p style="user-select: auto;">A <strong style="user-select: auto;">subarray</strong> is a contiguous subsequence of the array.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [1,2,3,4]
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation:</strong> We have 3 arithmetic slices in nums: [1, 2, 3], [2, 3, 4] and [1,2,3,4] itself.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [1]
<strong style="user-select: auto;">Output:</strong> 0
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums.length &lt;= 5000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">-1000 &lt;= nums[i] &lt;= 1000</code></li>
</ul>
</div>