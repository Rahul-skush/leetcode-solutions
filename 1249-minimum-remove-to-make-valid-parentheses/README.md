<h2><a href="https://leetcode.com/problems/minimum-remove-to-make-valid-parentheses/">1249. Minimum Remove to Make Valid Parentheses</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given a string <font face="monospace" style="user-select: auto;">s</font> of <code style="user-select: auto;">'('</code> , <code style="user-select: auto;">')'</code> and lowercase English characters.</p>

<p style="user-select: auto;">Your task is to remove the minimum number of parentheses ( <code style="user-select: auto;">'('</code> or <code style="user-select: auto;">')'</code>, in any positions ) so that the resulting <em style="user-select: auto;">parentheses string</em> is valid and return <strong style="user-select: auto;">any</strong> valid string.</p>

<p style="user-select: auto;">Formally, a <em style="user-select: auto;">parentheses string</em> is valid if and only if:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">It is the empty string, contains only lowercase characters, or</li>
	<li style="user-select: auto;">It can be written as <code style="user-select: auto;">AB</code> (<code style="user-select: auto;">A</code> concatenated with <code style="user-select: auto;">B</code>), where <code style="user-select: auto;">A</code> and <code style="user-select: auto;">B</code> are valid strings, or</li>
	<li style="user-select: auto;">It can be written as <code style="user-select: auto;">(A)</code>, where <code style="user-select: auto;">A</code> is a valid string.</li>
</ul>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "lee(t(c)o)de)"
<strong style="user-select: auto;">Output:</strong> "lee(t(c)o)de"
<strong style="user-select: auto;">Explanation:</strong> "lee(t(co)de)" , "lee(t(c)ode)" would also be accepted.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "a)b(c)d"
<strong style="user-select: auto;">Output:</strong> "ab(c)d"
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "))(("
<strong style="user-select: auto;">Output:</strong> ""
<strong style="user-select: auto;">Explanation:</strong> An empty string is also valid.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= s.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">s[i]</code> is either<code style="user-select: auto;">'('</code> , <code style="user-select: auto;">')'</code>, or lowercase English letter<code style="user-select: auto;">.</code></li>
</ul>
</div>