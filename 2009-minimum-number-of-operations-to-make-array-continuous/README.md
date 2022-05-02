<h2><a href="https://leetcode.com/problems/minimum-number-of-operations-to-make-array-continuous/">2009. Minimum Number of Operations to Make Array Continuous</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given an integer array <code style="user-select: auto;">nums</code>. In one operation, you can replace <strong style="user-select: auto;">any</strong> element in <code style="user-select: auto;">nums</code> with <strong style="user-select: auto;">any</strong> integer.</p>

<p style="user-select: auto;"><code style="user-select: auto;">nums</code> is considered <strong style="user-select: auto;">continuous</strong> if both of the following conditions are fulfilled:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">All elements in <code style="user-select: auto;">nums</code> are <strong style="user-select: auto;">unique</strong>.</li>
	<li style="user-select: auto;">The difference between the <strong style="user-select: auto;">maximum</strong> element and the <strong style="user-select: auto;">minimum</strong> element in <code style="user-select: auto;">nums</code> equals <code style="user-select: auto;">nums.length - 1</code>.</li>
</ul>

<p style="user-select: auto;">For example, <code style="user-select: auto;">nums = [4, 2, 5, 3]</code> is <strong style="user-select: auto;">continuous</strong>, but <code style="user-select: auto;">nums = [1, 2, 3, 5, 6]</code> is <strong style="user-select: auto;">not continuous</strong>.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the <strong style="user-select: auto;">minimum</strong> number of operations to make </em><code style="user-select: auto;">nums</code><em style="user-select: auto;"> </em><strong style="user-select: auto;"><em style="user-select: auto;">continuous</em></strong>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [4,2,5,3]
<strong style="user-select: auto;">Output:</strong> 0
<strong style="user-select: auto;">Explanation:</strong>&nbsp;nums is already continuous.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [1,2,3,5,6]
<strong style="user-select: auto;">Output:</strong> 1
<strong style="user-select: auto;">Explanation:</strong>&nbsp;One possible solution is to change the last element to 4.
The resulting array is [1,2,3,5,4], which is continuous.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [1,10,100,1000]
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation:</strong>&nbsp;One possible solution is to:
- Change the second element to 2.
- Change the third element to 3.
- Change the fourth element to 4.
The resulting array is [1,2,3,4], which is continuous.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums[i] &lt;= 10<sup style="user-select: auto;">9</sup></code></li>
</ul>
</div>