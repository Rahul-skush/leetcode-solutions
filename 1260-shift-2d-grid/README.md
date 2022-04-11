<h2><a href="https://leetcode.com/problems/shift-2d-grid/">1260. Shift 2D Grid</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given a 2D <code style="user-select: auto;">grid</code> of size <code style="user-select: auto;">m x n</code>&nbsp;and an integer <code style="user-select: auto;">k</code>. You need to shift the <code style="user-select: auto;">grid</code>&nbsp;<code style="user-select: auto;">k</code> times.</p>

<p style="user-select: auto;">In one shift operation:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">Element at <code style="user-select: auto;">grid[i][j]</code> moves to <code style="user-select: auto;">grid[i][j + 1]</code>.</li>
	<li style="user-select: auto;">Element at <code style="user-select: auto;">grid[i][n - 1]</code> moves to <code style="user-select: auto;">grid[i + 1][0]</code>.</li>
	<li style="user-select: auto;">Element at <code style="user-select: auto;">grid[m&nbsp;- 1][n - 1]</code> moves to <code style="user-select: auto;">grid[0][0]</code>.</li>
</ul>

<p style="user-select: auto;">Return the <em style="user-select: auto;">2D grid</em> after applying shift operation <code style="user-select: auto;">k</code> times.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2019/11/05/e1.png" style="width: 400px; height: 178px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> <code style="user-select: auto;">grid</code> = [[1,2,3],[4,5,6],[7,8,9]], k = 1
<strong style="user-select: auto;">Output:</strong> [[9,1,2],[3,4,5],[6,7,8]]
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2019/11/05/e2.png" style="width: 400px; height: 166px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> <code style="user-select: auto;">grid</code> = [[3,8,1,9],[19,7,2,5],[4,6,11,10],[12,0,21,13]], k = 4
<strong style="user-select: auto;">Output:</strong> [[12,0,21,13],[3,8,1,9],[19,7,2,5],[4,6,11,10]]
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> <code style="user-select: auto;">grid</code> = [[1,2,3],[4,5,6],[7,8,9]], k = 9
<strong style="user-select: auto;">Output:</strong> [[1,2,3],[4,5,6],[7,8,9]]
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">m ==&nbsp;grid.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">n ==&nbsp;grid[i].length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= m &lt;= 50</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n &lt;= 50</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">-1000 &lt;= grid[i][j] &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= k &lt;= 100</code></li>
</ul>
</div>