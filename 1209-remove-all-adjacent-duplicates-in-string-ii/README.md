<h2><a href="https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string-ii/">1209. Remove All Adjacent Duplicates in String II</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given a string <code style="user-select: auto;">s</code> and an integer <code style="user-select: auto;">k</code>, a <code style="user-select: auto;">k</code> <strong style="user-select: auto;">duplicate removal</strong> consists of choosing <code style="user-select: auto;">k</code> adjacent and equal letters from <code style="user-select: auto;">s</code> and removing them, causing the left and the right side of the deleted substring to concatenate together.</p>

<p style="user-select: auto;">We repeatedly make <code style="user-select: auto;">k</code> <strong style="user-select: auto;">duplicate removals</strong> on <code style="user-select: auto;">s</code> until we no longer can.</p>

<p style="user-select: auto;">Return the final string after all such duplicate removals have been made. It is guaranteed that the answer is unique.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "abcd", k = 2
<strong style="user-select: auto;">Output:</strong> "abcd"
<strong style="user-select: auto;">Explanation: </strong>There's nothing to delete.</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "deeedbbcccbdaa", k = 3
<strong style="user-select: auto;">Output:</strong> "aa"
<strong style="user-select: auto;">Explanation: 
</strong>First delete "eee" and "ccc", get "ddbbbdaa"
Then delete "bbb", get "dddaa"
Finally delete "ddd", get "aa"</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "pbbcggttciiippooaais", k = 2
<strong style="user-select: auto;">Output:</strong> "ps"
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= s.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">2 &lt;= k &lt;= 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">s</code> only contains lower case English letters.</li>
</ul>
</div>