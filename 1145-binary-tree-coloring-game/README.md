<h2><a href="https://leetcode.com/problems/binary-tree-coloring-game/">1145. Binary Tree Coloring Game</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Two players play a turn based game on a binary tree. We are given the <code style="user-select: auto;">root</code> of this binary tree, and the number of nodes <code style="user-select: auto;">n</code> in the tree. <code style="user-select: auto;">n</code> is odd, and each node has a distinct value from <code style="user-select: auto;">1</code> to <code style="user-select: auto;">n</code>.</p>

<p style="user-select: auto;">Initially, the first player names a value <code style="user-select: auto;">x</code> with <code style="user-select: auto;">1 &lt;= x &lt;= n</code>, and the second player names a value <code style="user-select: auto;">y</code> with <code style="user-select: auto;">1 &lt;= y &lt;= n</code> and <code style="user-select: auto;">y != x</code>. The first player colors the node with value <code style="user-select: auto;">x</code> red, and the second player colors the node with value <code style="user-select: auto;">y</code> blue.</p>

<p style="user-select: auto;">Then, the players take turns starting with the first player. In each turn, that player chooses a node of their color (red if player 1, blue if player 2) and colors an <strong style="user-select: auto;">uncolored</strong> neighbor of the chosen node (either the left child, right child, or parent of the chosen node.)</p>

<p style="user-select: auto;">If (and only if) a player cannot choose such a node in this way, they must pass their turn. If both players pass their turn, the game ends, and the winner is the player that colored more nodes.</p>

<p style="user-select: auto;">You are the second player. If it is possible to choose such a <code style="user-select: auto;">y</code> to ensure you win the game, return <code style="user-select: auto;">true</code>. If it is not possible, return <code style="user-select: auto;">false</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2019/08/01/1480-binary-tree-coloring-game.png" style="width: 500px; height: 310px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> root = [1,2,3,4,5,6,7,8,9,10,11], n = 11, x = 3
<strong style="user-select: auto;">Output:</strong> true
<strong style="user-select: auto;">Explanation: </strong>The second player can choose the node with value 2.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> root = [1,2,3], n = 3, x = 1
<strong style="user-select: auto;">Output:</strong> false
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">The number of nodes in the tree is <code style="user-select: auto;">n</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= x &lt;= n &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">n</code> is odd.</li>
	<li style="user-select: auto;">1 &lt;= Node.val &lt;= n</li>
	<li style="user-select: auto;">All the values of the tree are <strong style="user-select: auto;">unique</strong>.</li>
</ul>
</div>