<h2><a href="https://leetcode.com/problems/implement-strstr/">28. Implement strStr()</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Implement <a href="http://www.cplusplus.com/reference/cstring/strstr/" target="_blank" style="user-select: auto;">strStr()</a>.</p>

<p style="user-select: auto;">Return the index of the first occurrence of needle in haystack, or <code style="user-select: auto;">-1</code> if <code style="user-select: auto;">needle</code> is not part of <code style="user-select: auto;">haystack</code>.</p>

<p style="user-select: auto;"><strong style="user-select: auto;">Clarification:</strong></p>

<p style="user-select: auto;">What should we return when <code style="user-select: auto;">needle</code> is an empty string? This is a great question to ask during an interview.</p>

<p style="user-select: auto;">For the purpose of this problem, we will return 0 when <code style="user-select: auto;">needle</code> is an empty string. This is consistent to C's&nbsp;<a href="http://www.cplusplus.com/reference/cstring/strstr/" target="_blank" style="user-select: auto;">strstr()</a> and Java's&nbsp;<a href="https://docs.oracle.com/javase/7/docs/api/java/lang/String.html#indexOf(java.lang.String)" target="_blank" style="user-select: auto;">indexOf()</a>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> haystack = "hello", needle = "ll"
<strong style="user-select: auto;">Output:</strong> 2
</pre><p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> haystack = "aaaaa", needle = "bba"
<strong style="user-select: auto;">Output:</strong> -1
</pre><p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> haystack = "", needle = ""
<strong style="user-select: auto;">Output:</strong> 0
</pre>
<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= haystack.length, needle.length &lt;= 5 * 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">haystack</code> and&nbsp;<code style="user-select: auto;">needle</code> consist of only lower-case English characters.</li>
</ul>
</div>