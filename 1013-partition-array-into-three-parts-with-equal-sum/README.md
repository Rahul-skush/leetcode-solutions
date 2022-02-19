<h2><a href="https://leetcode.com/problems/partition-array-into-three-parts-with-equal-sum/">1013. Partition Array Into Three Parts With Equal Sum</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given an array of integers <code style="user-select: auto;">arr</code>, return <code style="user-select: auto;">true</code> if we can partition the array into three <strong style="user-select: auto;">non-empty</strong> parts with equal sums.</p>

<p style="user-select: auto;">Formally, we can partition the array if we can find indexes <code style="user-select: auto;">i + 1 &lt; j</code> with <code style="user-select: auto;">(arr[0] + arr[1] + ... + arr[i] == arr[i + 1] + arr[i + 2] + ... + arr[j - 1] == arr[j] + arr[j + 1] + ... + arr[arr.length - 1])</code></p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> arr = [0,2,1,-6,6,-7,9,1,2,0,1]
<strong style="user-select: auto;">Output:</strong> true
<strong style="user-select: auto;">Explanation: </strong>0 + 2 + 1 = -6 + 6 - 7 + 9 + 1 = 2 + 0 + 1
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> arr = [0,2,1,-6,6,7,9,-1,2,0,1]
<strong style="user-select: auto;">Output:</strong> false
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> arr = [3,3,6,5,-2,2,5,1,-9,4]
<strong style="user-select: auto;">Output:</strong> true
<strong style="user-select: auto;">Explanation: </strong>3 + 3 = 6 = 5 - 2 + 2 + 5 + 1 - 9 + 4
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">3 &lt;= arr.length &lt;= 5 * 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">-10<sup style="user-select: auto;">4</sup> &lt;= arr[i] &lt;= 10<sup style="user-select: auto;">4</sup></code></li>
</ul>
</div>