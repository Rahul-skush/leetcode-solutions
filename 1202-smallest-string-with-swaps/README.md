<h2><a href="https://leetcode.com/problems/smallest-string-with-swaps/">1202. Smallest String With Swaps</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given a string <code style="user-select: auto;">s</code>, and an array of pairs of indices in the string&nbsp;<code style="user-select: auto;">pairs</code>&nbsp;where&nbsp;<code style="user-select: auto;">pairs[i] =&nbsp;[a, b]</code>&nbsp;indicates 2 indices(0-indexed) of the string.</p>

<p style="user-select: auto;">You can&nbsp;swap the characters at any pair of indices in the given&nbsp;<code style="user-select: auto;">pairs</code>&nbsp;<strong style="user-select: auto;">any number of times</strong>.</p>

<p style="user-select: auto;">Return the&nbsp;lexicographically smallest string that <code style="user-select: auto;">s</code>&nbsp;can be changed to after using the swaps.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "dcab", pairs = [[0,3],[1,2]]
<strong style="user-select: auto;">Output:</strong> "bacd"
<strong style="user-select: auto;">Explaination:</strong> 
Swap s[0] and s[3], s = "bcad"
Swap s[1] and s[2], s = "bacd"
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "dcab", pairs = [[0,3],[1,2],[0,2]]
<strong style="user-select: auto;">Output:</strong> "abcd"
<strong style="user-select: auto;">Explaination: </strong>
Swap s[0] and s[3], s = "bcad"
Swap s[0] and s[2], s = "acbd"
Swap s[1] and s[2], s = "abcd"</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "cba", pairs = [[0,1],[1,2]]
<strong style="user-select: auto;">Output:</strong> "abc"
<strong style="user-select: auto;">Explaination: </strong>
Swap s[0] and s[1], s = "bca"
Swap s[1] and s[2], s = "bac"
Swap s[0] and s[1], s = "abc"
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= s.length &lt;= 10^5</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= pairs.length &lt;= 10^5</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= pairs[i][0], pairs[i][1] &lt;&nbsp;s.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">s</code>&nbsp;only contains lower case English letters.</li>
</ul>
</div>