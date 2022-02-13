<h2><a href="https://leetcode.com/problems/minimum-insertion-steps-to-make-a-string-palindrome/">1312. Minimum Insertion Steps to Make a String Palindrome</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given a string <code style="user-select: auto;">s</code>. In one step you can insert any character at any index of the string.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the minimum number of steps</em> to make <code style="user-select: auto;">s</code>&nbsp;palindrome.</p>

<p style="user-select: auto;">A&nbsp;<b style="user-select: auto;">Palindrome String</b>&nbsp;is one that reads the same backward as well as forward.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "zzazz"
<strong style="user-select: auto;">Output:</strong> 0
<strong style="user-select: auto;">Explanation:</strong> The string "zzazz" is already palindrome we don't need any insertions.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "mbadm"
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation:</strong> String can be "mbdadbm" or "mdbabdm".
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "leetcode"
<strong style="user-select: auto;">Output:</strong> 5
<strong style="user-select: auto;">Explanation:</strong> Inserting 5 characters the string becomes "leetcodocteel".
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= s.length &lt;= 500</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">s</code> consists of lowercase English letters.</li>
</ul>
</div>