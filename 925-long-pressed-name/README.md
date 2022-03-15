<h2><a href="https://leetcode.com/problems/long-pressed-name/">925. Long Pressed Name</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Your friend is typing his <code style="user-select: auto;">name</code> into a keyboard. Sometimes, when typing a character <code style="user-select: auto;">c</code>, the key might get <em style="user-select: auto;">long pressed</em>, and the character will be typed 1 or more times.</p>

<p style="user-select: auto;">You examine the <code style="user-select: auto;">typed</code> characters of the keyboard. Return <code style="user-select: auto;">True</code> if it is possible that it was your friends name, with some characters (possibly none) being long pressed.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> name = "alex", typed = "aaleex"
<strong style="user-select: auto;">Output:</strong> true
<strong style="user-select: auto;">Explanation: </strong>'a' and 'e' in 'alex' were long pressed.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> name = "saeed", typed = "ssaaedd"
<strong style="user-select: auto;">Output:</strong> false
<strong style="user-select: auto;">Explanation: </strong>'e' must have been pressed twice, but it was not in the typed output.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= name.length, typed.length &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">name</code> and <code style="user-select: auto;">typed</code> consist of only lowercase English letters.</li>
</ul>
</div>