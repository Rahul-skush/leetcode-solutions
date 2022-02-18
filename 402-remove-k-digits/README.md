<h2><a href="https://leetcode.com/problems/remove-k-digits/">402. Remove K Digits</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given string num representing a non-negative integer <code style="user-select: auto;">num</code>, and an integer <code style="user-select: auto;">k</code>, return <em style="user-select: auto;">the smallest possible integer after removing</em> <code style="user-select: auto;">k</code> <em style="user-select: auto;">digits from</em> <code style="user-select: auto;">num</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> num = "1432219", k = 3
<strong style="user-select: auto;">Output:</strong> "1219"
<strong style="user-select: auto;">Explanation:</strong> Remove the three digits 4, 3, and 2 to form the new number 1219 which is the smallest.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> num = "10200", k = 1
<strong style="user-select: auto;">Output:</strong> "200"
<strong style="user-select: auto;">Explanation:</strong> Remove the leading 1 and the number is 200. Note that the output must not contain leading zeroes.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> num = "10", k = 2
<strong style="user-select: auto;">Output:</strong> "0"
<strong style="user-select: auto;">Explanation:</strong> Remove all the digits from the number and it is left with nothing which is 0.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= k &lt;= num.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">num</code> consists of only digits.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">num</code> does not have any leading zeros except for the zero itself.</li>
</ul>
</div>