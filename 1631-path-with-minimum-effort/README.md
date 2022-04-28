<h2><a href="https://leetcode.com/problems/path-with-minimum-effort/">1631. Path With Minimum Effort</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are a hiker preparing for an upcoming hike. You are given <code style="user-select: auto;">heights</code>, a 2D array of size <code style="user-select: auto;">rows x columns</code>, where <code style="user-select: auto;">heights[row][col]</code> represents the height of cell <code style="user-select: auto;">(row, col)</code>. You are situated in the top-left cell, <code style="user-select: auto;">(0, 0)</code>, and you hope to travel to the bottom-right cell, <code style="user-select: auto;">(rows-1, columns-1)</code> (i.e.,&nbsp;<strong style="user-select: auto;">0-indexed</strong>). You can move <strong style="user-select: auto;">up</strong>, <strong style="user-select: auto;">down</strong>, <strong style="user-select: auto;">left</strong>, or <strong style="user-select: auto;">right</strong>, and you wish to find a route that requires the minimum <strong style="user-select: auto;">effort</strong>.</p>

<p style="user-select: auto;">A route's <strong style="user-select: auto;">effort</strong> is the <strong style="user-select: auto;">maximum absolute difference</strong><strong style="user-select: auto;"> </strong>in heights between two consecutive cells of the route.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the minimum <strong style="user-select: auto;">effort</strong> required to travel from the top-left cell to the bottom-right cell.</em></p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<p style="user-select: auto;"><img alt="" src="https://assets.leetcode.com/uploads/2020/10/04/ex1.png" style="width: 300px; height: 300px; user-select: auto;"></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> heights = [[1,2,2],[3,8,2],[5,3,5]]
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation:</strong> The route of [1,3,5,3,5] has a maximum absolute difference of 2 in consecutive cells.
This is better than the route of [1,2,2,2,5], where the maximum absolute difference is 3.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<p style="user-select: auto;"><img alt="" src="https://assets.leetcode.com/uploads/2020/10/04/ex2.png" style="width: 300px; height: 300px; user-select: auto;"></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> heights = [[1,2,3],[3,8,4],[5,3,5]]
<strong style="user-select: auto;">Output:</strong> 1
<strong style="user-select: auto;">Explanation:</strong> The route of [1,2,3,4,5] has a maximum absolute difference of 1 in consecutive cells, which is better than route [1,3,5,3,5].
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/10/04/ex3.png" style="width: 300px; height: 300px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> heights = [[1,2,1,1,1],[1,2,1,2,1],[1,2,1,2,1],[1,2,1,2,1],[1,1,1,2,1]]
<strong style="user-select: auto;">Output:</strong> 0
<strong style="user-select: auto;">Explanation:</strong> This route does not require any effort.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">rows == heights.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">columns == heights[i].length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= rows, columns &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= heights[i][j] &lt;= 10<sup style="user-select: auto;">6</sup></code></li>
</ul></div>