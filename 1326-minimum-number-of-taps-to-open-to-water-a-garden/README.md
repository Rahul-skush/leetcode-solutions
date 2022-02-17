<h2><a href="https://leetcode.com/problems/minimum-number-of-taps-to-open-to-water-a-garden/">1326. Minimum Number of Taps to Open to Water a Garden</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">There is a one-dimensional garden on the x-axis. The garden starts at the point <code style="user-select: auto;">0</code> and ends at the point <code style="user-select: auto;">n</code>. (i.e The length of the garden is <code style="user-select: auto;">n</code>).</p>

<p style="user-select: auto;">There are <code style="user-select: auto;">n + 1</code> taps located at points <code style="user-select: auto;">[0, 1, ..., n]</code> in the garden.</p>

<p style="user-select: auto;">Given an integer <code style="user-select: auto;">n</code> and an integer array <code style="user-select: auto;">ranges</code> of length <code style="user-select: auto;">n + 1</code> where <code style="user-select: auto;">ranges[i]</code> (0-indexed) means the <code style="user-select: auto;">i-th</code> tap can water the area <code style="user-select: auto;">[i - ranges[i], i + ranges[i]]</code> if it was open.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the minimum number of taps</em> that should be open to water the whole garden, If the garden cannot be watered return <strong style="user-select: auto;">-1</strong>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/01/16/1685_example_1.png" style="width: 525px; height: 255px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 5, ranges = [3,4,1,1,0,0]
<strong style="user-select: auto;">Output:</strong> 1
<strong style="user-select: auto;">Explanation:</strong> The tap at point 0 can cover the interval [-3,3]
The tap at point 1 can cover the interval [-3,5]
The tap at point 2 can cover the interval [1,3]
The tap at point 3 can cover the interval [2,4]
The tap at point 4 can cover the interval [4,4]
The tap at point 5 can cover the interval [5,5]
Opening Only the second tap will water the whole garden [0,5]
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 3, ranges = [0,0,0,0]
<strong style="user-select: auto;">Output:</strong> -1
<strong style="user-select: auto;">Explanation:</strong> Even if you activate all the four taps you cannot water the whole garden.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n &lt;= 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">ranges.length == n + 1</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= ranges[i] &lt;= 100</code></li>
</ul>
</div>