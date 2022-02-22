<h2><a href="https://leetcode.com/problems/duplicate-zeros/">1089. Duplicate Zeros</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given a fixed-length integer array <code style="user-select: auto;">arr</code>, duplicate each occurrence of zero, shifting the remaining elements to the right.</p>

<p style="user-select: auto;"><strong style="user-select: auto;">Note</strong> that elements beyond the length of the original array are not written. Do the above modifications to the input array in place and do not return anything.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> arr = [1,0,2,3,0,4,5,0]
<strong style="user-select: auto;">Output:</strong> [1,0,0,2,3,0,0,4]
<strong style="user-select: auto;">Explanation:</strong> After calling your function, the input array is modified to: [1,0,0,2,3,0,0,4]
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> arr = [1,2,3]
<strong style="user-select: auto;">Output:</strong> [1,2,3]
<strong style="user-select: auto;">Explanation:</strong> After calling your function, the input array is modified to: [1,2,3]
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= arr.length &lt;= 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= arr[i] &lt;= 9</code></li>
</ul>
</div>