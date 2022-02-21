<h2><a href="https://leetcode.com/problems/repeated-string-match/">686. Repeated String Match</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given two strings <code style="user-select: auto;">a</code> and <code style="user-select: auto;">b</code>, return <em style="user-select: auto;">the minimum number of times you should repeat string </em><code style="user-select: auto;">a</code><em style="user-select: auto;"> so that string</em> <code style="user-select: auto;">b</code> <em style="user-select: auto;">is a substring of it</em>. If it is impossible for <code style="user-select: auto;">b</code>​​​​​​ to be a substring of <code style="user-select: auto;">a</code> after repeating it, return <code style="user-select: auto;">-1</code>.</p>

<p style="user-select: auto;"><strong style="user-select: auto;">Notice:</strong> string <code style="user-select: auto;">"abc"</code> repeated 0 times is <code style="user-select: auto;">""</code>, repeated 1 time is <code style="user-select: auto;">"abc"</code> and repeated 2 times is <code style="user-select: auto;">"abcabc"</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> a = "abcd", b = "cdabcdab"
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation:</strong> We return 3 because by repeating a three times "ab<strong style="user-select: auto;">cdabcdab</strong>cd", b is a substring of it.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> a = "a", b = "aa"
<strong style="user-select: auto;">Output:</strong> 2
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= a.length, b.length &lt;= 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">a</code> and <code style="user-select: auto;">b</code> consist of lowercase English letters.</li>
</ul>
</div>