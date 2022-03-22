<h2><a href="https://leetcode.com/problems/smallest-string-with-a-given-numeric-value/">1663. Smallest String With A Given Numeric Value</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">The <strong style="user-select: auto;">numeric value</strong> of a <strong style="user-select: auto;">lowercase character</strong> is defined as its position <code style="user-select: auto;">(1-indexed)</code> in the alphabet, so the numeric value of <code style="user-select: auto;">a</code> is <code style="user-select: auto;">1</code>, the numeric value of <code style="user-select: auto;">b</code> is <code style="user-select: auto;">2</code>, the numeric value of <code style="user-select: auto;">c</code> is <code style="user-select: auto;">3</code>, and so on.</p>

<p style="user-select: auto;">The <strong style="user-select: auto;">numeric value</strong> of a <strong style="user-select: auto;">string</strong> consisting of lowercase characters is defined as the sum of its characters' numeric values. For example, the numeric value of the string <code style="user-select: auto;">"abe"</code> is equal to <code style="user-select: auto;">1 + 2 + 5 = 8</code>.</p>

<p style="user-select: auto;">You are given two integers <code style="user-select: auto;">n</code> and <code style="user-select: auto;">k</code>. Return <em style="user-select: auto;">the <strong style="user-select: auto;">lexicographically smallest string</strong> with <strong style="user-select: auto;">length</strong> equal to <code style="user-select: auto;">n</code> and <strong style="user-select: auto;">numeric value</strong> equal to <code style="user-select: auto;">k</code>.</em></p>

<p style="user-select: auto;">Note that a string <code style="user-select: auto;">x</code> is lexicographically smaller than string <code style="user-select: auto;">y</code> if <code style="user-select: auto;">x</code> comes before <code style="user-select: auto;">y</code> in dictionary order, that is, either <code style="user-select: auto;">x</code> is a prefix of <code style="user-select: auto;">y</code>, or if <code style="user-select: auto;">i</code> is the first position such that <code style="user-select: auto;">x[i] != y[i]</code>, then <code style="user-select: auto;">x[i]</code> comes before <code style="user-select: auto;">y[i]</code> in alphabetic order.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 3, k = 27
<strong style="user-select: auto;">Output:</strong> "aay"
<strong style="user-select: auto;">Explanation:</strong> The numeric value of the string is 1 + 1 + 25 = 27, and it is the smallest string with such a value and length equal to 3.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 5, k = 73
<strong style="user-select: auto;">Output:</strong> "aaszz"
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">n &lt;= k &lt;= 26 * n</code></li>
</ul>
</div>