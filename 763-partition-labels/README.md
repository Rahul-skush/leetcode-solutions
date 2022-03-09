<h2><a href="https://leetcode.com/problems/partition-labels/">763. Partition Labels</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given a string <code style="user-select: auto;">s</code>. We want to partition the string into as many parts as possible so that each letter appears in at most one part.</p>

<p style="user-select: auto;">Note that the partition is done so that after concatenating all the parts in order, the resultant string should be <code style="user-select: auto;">s</code>.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">a list of integers representing the size of these parts</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "ababcbacadefegdehijhklij"
<strong style="user-select: auto;">Output:</strong> [9,7,8]
<strong style="user-select: auto;">Explanation:</strong>
The partition is "ababcbaca", "defegde", "hijhklij".
This is a partition so that each letter appears in at most one part.
A partition like "ababcbacadefegde", "hijhklij" is incorrect, because it splits s into less parts.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "eccbbbbdec"
<strong style="user-select: auto;">Output:</strong> [10]
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= s.length &lt;= 500</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">s</code> consists of lowercase English letters.</li>
</ul>
</div>