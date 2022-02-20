<h2><a href="https://leetcode.com/problems/remove-covered-intervals/">1288. Remove Covered Intervals</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given an array <code style="user-select: auto;">intervals</code> where <code style="user-select: auto;">intervals[i] = [l<sub style="user-select: auto;">i</sub>, r<sub style="user-select: auto;">i</sub>]</code> represent the interval <code style="user-select: auto;">[l<sub style="user-select: auto;">i</sub>, r<sub style="user-select: auto;">i</sub>)</code>, remove all intervals that are covered by another interval in the list.</p>

<p style="user-select: auto;">The interval <code style="user-select: auto;">[a, b)</code> is covered by the interval <code style="user-select: auto;">[c, d)</code> if and only if <code style="user-select: auto;">c &lt;= a</code> and <code style="user-select: auto;">b &lt;= d</code>.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the number of remaining intervals</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> intervals = [[1,4],[3,6],[2,8]]
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation:</strong> Interval [3,6] is covered by [2,8], therefore it is removed.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> intervals = [[1,4],[2,3]]
<strong style="user-select: auto;">Output:</strong> 1
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= intervals.length &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">intervals[i].length == 2</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= l<sub style="user-select: auto;">i</sub> &lt;= r<sub style="user-select: auto;">i</sub> &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;">All the given intervals are <strong style="user-select: auto;">unique</strong>.</li>
</ul>
</div>