<h2><a href="https://leetcode.com/problems/score-of-parentheses/">856. Score of Parentheses</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given a balanced parentheses string <code style="user-select: auto;">s</code>, return <em style="user-select: auto;">the <strong style="user-select: auto;">score</strong> of the string</em>.</p>

<p style="user-select: auto;">The <strong style="user-select: auto;">score</strong> of a balanced parentheses string is based on the following rule:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">"()"</code> has score <code style="user-select: auto;">1</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">AB</code> has score <code style="user-select: auto;">A + B</code>, where <code style="user-select: auto;">A</code> and <code style="user-select: auto;">B</code> are balanced parentheses strings.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">(A)</code> has score <code style="user-select: auto;">2 * A</code>, where <code style="user-select: auto;">A</code> is a balanced parentheses string.</li>
</ul>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "()"
<strong style="user-select: auto;">Output:</strong> 1
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "(())"
<strong style="user-select: auto;">Output:</strong> 2
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "()()"
<strong style="user-select: auto;">Output:</strong> 2
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">2 &lt;= s.length &lt;= 50</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">s</code> consists of only <code style="user-select: auto;">'('</code> and <code style="user-select: auto;">')'</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">s</code> is a balanced parentheses string.</li>
</ul>
</div>