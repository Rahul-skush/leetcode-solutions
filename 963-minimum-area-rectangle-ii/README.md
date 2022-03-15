<h2><a href="https://leetcode.com/problems/minimum-area-rectangle-ii/">963. Minimum Area Rectangle II</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given an array of points in the <strong style="user-select: auto;">X-Y</strong> plane <code style="user-select: auto;">points</code> where <code style="user-select: auto;">points[i] = [x<sub style="user-select: auto;">i</sub>, y<sub style="user-select: auto;">i</sub>]</code>.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the minimum area of any rectangle formed from these points, with sides <strong style="user-select: auto;">not necessarily parallel</strong> to the X and Y axes</em>. If there is not any such rectangle, return <code style="user-select: auto;">0</code>.</p>

<p style="user-select: auto;">Answers within <code style="user-select: auto;">10<sup style="user-select: auto;">-5</sup></code> of the actual answer will be accepted.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2018/12/21/1a.png" style="width: 398px; height: 400px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> points = [[1,2],[2,1],[1,0],[0,1]]
<strong style="user-select: auto;">Output:</strong> 2.00000
<strong style="user-select: auto;">Explanation:</strong> The minimum area rectangle occurs at [1,2],[2,1],[1,0],[0,1], with an area of 2.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2018/12/22/2.png" style="width: 400px; height: 251px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> points = [[0,1],[2,1],[1,1],[1,0],[2,0]]
<strong style="user-select: auto;">Output:</strong> 1.00000
<strong style="user-select: auto;">Explanation:</strong> The minimum area rectangle occurs at [1,0],[1,1],[2,1],[2,0], with an area of 1.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2018/12/22/3.png" style="width: 383px; height: 400px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> points = [[0,3],[1,2],[3,1],[1,3],[2,1]]
<strong style="user-select: auto;">Output:</strong> 0
<strong style="user-select: auto;">Explanation:</strong> There is no possible rectangle to form from these points.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= points.length &lt;= 50</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">points[i].length == 2</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= x<sub style="user-select: auto;">i</sub>, y<sub style="user-select: auto;">i</sub> &lt;= 4 * 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;">All the given points are <strong style="user-select: auto;">unique</strong>.</li>
</ul>
</div>