<h2><a href="https://leetcode.com/problems/3sum-with-multiplicity/">923. 3Sum With Multiplicity</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given an integer array <code style="user-select: auto;">arr</code>, and an integer <code style="user-select: auto;">target</code>, return the number of tuples <code style="user-select: auto;">i, j, k</code> such that <code style="user-select: auto;">i &lt; j &lt; k</code> and <code style="user-select: auto;">arr[i] + arr[j] + arr[k] == target</code>.</p>

<p style="user-select: auto;">As the answer can be very large, return it <strong style="user-select: auto;">modulo</strong> <code style="user-select: auto;">10<sup style="user-select: auto;">9</sup> + 7</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> arr = [1,1,2,2,3,3,4,4,5,5], target = 8
<strong style="user-select: auto;">Output:</strong> 20
<strong style="user-select: auto;">Explanation: </strong>
Enumerating by the values (arr[i], arr[j], arr[k]):
(1, 2, 5) occurs 8 times;
(1, 3, 4) occurs 8 times;
(2, 2, 4) occurs 2 times;
(2, 3, 3) occurs 2 times.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> arr = [1,1,2,2,2,2], target = 5
<strong style="user-select: auto;">Output:</strong> 12
<strong style="user-select: auto;">Explanation: </strong>
arr[i] = 1, arr[j] = arr[k] = 2 occurs 12 times:
We choose one 1 from [1,1] in 2 ways,
and two 2s from [2,2,2,2] in 6 ways.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">3 &lt;= arr.length &lt;= 3000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= arr[i] &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= target &lt;= 300</code></li>
</ul>
</div>