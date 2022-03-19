<h2><a href="https://leetcode.com/problems/longest-happy-prefix/">1392. Longest Happy Prefix</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">A string is called a <strong style="user-select: auto;">happy prefix</strong> if is a <strong style="user-select: auto;">non-empty</strong> prefix which is also a suffix (excluding itself).</p>

<p style="user-select: auto;">Given a string <code style="user-select: auto;">s</code>, return <em style="user-select: auto;">the <strong style="user-select: auto;">longest happy prefix</strong> of</em> <code style="user-select: auto;">s</code>. Return an empty string <code style="user-select: auto;">""</code> if no such prefix exists.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "level"
<strong style="user-select: auto;">Output:</strong> "l"
<strong style="user-select: auto;">Explanation:</strong> s contains 4 prefix excluding itself ("l", "le", "lev", "leve"), and suffix ("l", "el", "vel", "evel"). The largest prefix which is also suffix is given by "l".
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "ababab"
<strong style="user-select: auto;">Output:</strong> "abab"
<strong style="user-select: auto;">Explanation:</strong> "abab" is the largest prefix which is also suffix. They can overlap in the original string.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= s.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">s</code> contains only lowercase English letters.</li>
</ul>
</div>