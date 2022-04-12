<h2><a href="https://leetcode.com/problems/game-of-life/">289. Game of Life</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">According to&nbsp;<a href="https://en.wikipedia.org/wiki/Conway%27s_Game_of_Life" target="_blank" style="user-select: auto;">Wikipedia's article</a>: "The <b style="user-select: auto;">Game of Life</b>, also known simply as <b style="user-select: auto;">Life</b>, is a cellular automaton devised by the British mathematician John Horton Conway in 1970."</p>

<p style="user-select: auto;">The board is made up of an <code style="user-select: auto;">m x n</code> grid of cells, where each cell has an initial state: <b style="user-select: auto;">live</b> (represented by a <code style="user-select: auto;">1</code>) or <b style="user-select: auto;">dead</b> (represented by a <code style="user-select: auto;">0</code>). Each cell interacts with its <a href="https://en.wikipedia.org/wiki/Moore_neighborhood" target="_blank" style="user-select: auto;">eight neighbors</a> (horizontal, vertical, diagonal) using the following four rules (taken from the above Wikipedia article):</p>

<ol style="user-select: auto;">
	<li style="user-select: auto;">Any live cell with fewer than two live neighbors dies as if caused by under-population.</li>
	<li style="user-select: auto;">Any live cell with two or three live neighbors lives on to the next generation.</li>
	<li style="user-select: auto;">Any live cell with more than three live neighbors dies, as if by over-population.</li>
	<li style="user-select: auto;">Any dead cell with exactly three live neighbors becomes a live cell, as if by reproduction.</li>
</ol>

<p style="user-select: auto;"><span style="user-select: auto;">The next state is created by applying the above rules simultaneously to every cell in the current state, where births and deaths occur simultaneously. Given the current state of the <code style="user-select: auto;">m x n</code> grid <code style="user-select: auto;">board</code>, return <em style="user-select: auto;">the next state</em>.</span></p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/12/26/grid1.jpg" style="width: 562px; height: 322px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> board = [[0,1,0],[0,0,1],[1,1,1],[0,0,0]]
<strong style="user-select: auto;">Output:</strong> [[0,0,0],[1,0,1],[0,1,1],[0,1,0]]
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/12/26/grid2.jpg" style="width: 402px; height: 162px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> board = [[1,1],[1,0]]
<strong style="user-select: auto;">Output:</strong> [[1,1],[1,1]]
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">m == board.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">n == board[i].length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= m, n &lt;= 25</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">board[i][j]</code> is <code style="user-select: auto;">0</code> or <code style="user-select: auto;">1</code>.</li>
</ul>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Follow up:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">Could you solve it in-place? Remember that the board needs to be updated simultaneously: You cannot update some cells first and then use their updated values to update other cells.</li>
	<li style="user-select: auto;">In this question, we represent the board using a 2D array. In principle, the board is infinite, which would cause problems when the active area encroaches upon the border of the array (i.e., live cells reach the border). How would you address these problems?</li>
</ul>
</div>