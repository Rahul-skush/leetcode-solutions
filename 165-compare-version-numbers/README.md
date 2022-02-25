<h2><a href="https://leetcode.com/problems/compare-version-numbers/">165. Compare Version Numbers</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given two version numbers,&nbsp;<code style="user-select: auto;">version1</code> and <code style="user-select: auto;">version2</code>, compare them.</p>

<ul style="user-select: auto;">
</ul>

<p style="user-select: auto;">Version numbers consist of <strong style="user-select: auto;">one or more revisions</strong> joined by a dot&nbsp;<code style="user-select: auto;">'.'</code>. Each revision&nbsp;consists of <strong style="user-select: auto;">digits</strong>&nbsp;and may contain leading <strong style="user-select: auto;">zeros</strong>. Every revision contains <strong style="user-select: auto;">at least one character</strong>. Revisions are <strong style="user-select: auto;">0-indexed from left to right</strong>, with the leftmost revision being revision 0, the next revision being revision 1, and so on. For example&nbsp;<code style="user-select: auto;">2.5.33</code>&nbsp;and&nbsp;<code style="user-select: auto;">0.1</code>&nbsp;are valid version numbers.</p>

<p style="user-select: auto;">To compare version numbers, compare their revisions in <strong style="user-select: auto;">left-to-right order</strong>. Revisions are compared using their&nbsp;<strong style="user-select: auto;">integer value ignoring any leading zeros</strong>. This means that revisions&nbsp;<code style="user-select: auto;">1</code>&nbsp;and&nbsp;<code style="user-select: auto;">001</code>&nbsp;are considered&nbsp;<strong style="user-select: auto;">equal</strong>. If a version number does not specify a revision at an index, then&nbsp;<strong style="user-select: auto;">treat the revision as&nbsp;<code style="user-select: auto;">0</code></strong>. For example, version&nbsp;<code style="user-select: auto;">1.0</code> is less than version&nbsp;<code style="user-select: auto;">1.1</code>&nbsp;because their revision 0s are the same, but their revision 1s are&nbsp;<code style="user-select: auto;">0</code>&nbsp;and&nbsp;<code style="user-select: auto;">1</code>&nbsp;respectively, and&nbsp;<code style="user-select: auto;">0 &lt; 1</code>.</p>

<p style="user-select: auto;"><em style="user-select: auto;">Return the following:</em></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">If <code style="user-select: auto;">version1 &lt; version2</code>, return <code style="user-select: auto;">-1</code>.</li>
	<li style="user-select: auto;">If <code style="user-select: auto;">version1 &gt; version2</code>, return <code style="user-select: auto;">1</code>.</li>
	<li style="user-select: auto;">Otherwise, return <code style="user-select: auto;">0</code>.</li>
</ul>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> version1 = "1.01", version2 = "1.001"
<strong style="user-select: auto;">Output:</strong> 0
<strong style="user-select: auto;">Explanation:</strong> Ignoring leading zeroes, both "01" and "001" represent the same integer "1".
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> version1 = "1.0", version2 = "1.0.0"
<strong style="user-select: auto;">Output:</strong> 0
<strong style="user-select: auto;">Explanation:</strong> version1 does not specify revision 2, which means it is treated as "0".
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> version1 = "0.1", version2 = "1.1"
<strong style="user-select: auto;">Output:</strong> -1
<strong style="user-select: auto;">Explanation:</strong> version1's revision 0 is "0", while version2's revision 0 is "1". 0 &lt; 1, so version1 &lt; version2.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= version1.length, version2.length &lt;= 500</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">version1</code> and <code style="user-select: auto;">version2</code>&nbsp;only contain digits and <code style="user-select: auto;">'.'</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">version1</code> and <code style="user-select: auto;">version2</code>&nbsp;<strong style="user-select: auto;">are valid version numbers</strong>.</li>
	<li style="user-select: auto;">All the given revisions in&nbsp;<code style="user-select: auto;">version1</code> and <code style="user-select: auto;">version2</code>&nbsp;can be stored in&nbsp;a&nbsp;<strong style="user-select: auto;">32-bit integer</strong>.</li>
</ul>
</div>