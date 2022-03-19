<h2><a href="https://leetcode.com/problems/cherry-pickup/">741. Cherry Pickup</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given an <code style="user-select: auto;">n x n</code> <code style="user-select: auto;">grid</code> representing a field of cherries, each cell is one of three possible integers.</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">0</code> means the cell is empty, so you can pass through,</li>
	<li style="user-select: auto;"><code style="user-select: auto;">1</code> means the cell contains a cherry that you can pick up and pass through, or</li>
	<li style="user-select: auto;"><code style="user-select: auto;">-1</code> means the cell contains a thorn that blocks your way.</li>
</ul>

<p style="user-select: auto;">Return <em style="user-select: auto;">the maximum number of cherries you can collect by following the rules below</em>:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">Starting at the position <code style="user-select: auto;">(0, 0)</code> and reaching <code style="user-select: auto;">(n - 1, n - 1)</code> by moving right or down through valid path cells (cells with value <code style="user-select: auto;">0</code> or <code style="user-select: auto;">1</code>).</li>
	<li style="user-select: auto;">After reaching <code style="user-select: auto;">(n - 1, n - 1)</code>, returning to <code style="user-select: auto;">(0, 0)</code> by moving left or up through valid path cells.</li>
	<li style="user-select: auto;">When passing through a path cell containing a cherry, you pick it up, and the cell becomes an empty cell <code style="user-select: auto;">0</code>.</li>
	<li style="user-select: auto;">If there is no valid path between <code style="user-select: auto;">(0, 0)</code> and <code style="user-select: auto;">(n - 1, n - 1)</code>, then no cherries can be collected.</li>
</ul>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/12/14/grid.jpg" style="width: 242px; height: 242px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> grid = [[0,1,-1],[1,0,-1],[1,1,1]]
<strong style="user-select: auto;">Output:</strong> 5
<strong style="user-select: auto;">Explanation:</strong> The player started at (0, 0) and went down, down, right right to reach (2, 2).
4 cherries were picked up during this single trip, and the matrix becomes [[0,1,-1],[0,0,-1],[0,0,0]].
Then, the player went left, up, up, left to return home, picking up one more cherry.
The total number of cherries picked up is 5, and this is the maximum possible.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> grid = [[1,1,-1],[1,-1,1],[-1,1,1]]
<strong style="user-select: auto;">Output:</strong> 0
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">n == grid.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">n == grid[i].length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n &lt;= 50</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">grid[i][j]</code> is <code style="user-select: auto;">-1</code>, <code style="user-select: auto;">0</code>, or <code style="user-select: auto;">1</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">grid[0][0] != -1</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">grid[n - 1][n - 1] != -1</code></li>
</ul>
</div>