<h2><a href="https://leetcode.com/problems/shortest-path-visiting-all-nodes/">847. Shortest Path Visiting All Nodes</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You have an undirected, connected graph of <code style="user-select: auto;">n</code> nodes labeled from <code style="user-select: auto;">0</code> to <code style="user-select: auto;">n - 1</code>. You are given an array <code style="user-select: auto;">graph</code> where <code style="user-select: auto;">graph[i]</code> is a list of all the nodes connected with node <code style="user-select: auto;">i</code> by an edge.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the length of the shortest path that visits every node</em>. You may start and stop at any node, you may revisit nodes multiple times, and you may reuse edges.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/05/12/shortest1-graph.jpg" style="width: 222px; height: 183px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> graph = [[1,2,3],[0],[0],[0]]
<strong style="user-select: auto;">Output:</strong> 4
<strong style="user-select: auto;">Explanation:</strong> One possible path is [1,0,2,0,3]
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/05/12/shortest2-graph.jpg" style="width: 382px; height: 222px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> graph = [[1],[0,2,4],[1,3,4],[2],[1,2]]
<strong style="user-select: auto;">Output:</strong> 4
<strong style="user-select: auto;">Explanation:</strong> One possible path is [0,1,4,2,3]
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">n == graph.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n &lt;= 12</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= graph[i].length &lt;&nbsp;n</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">graph[i]</code> does not contain <code style="user-select: auto;">i</code>.</li>
	<li style="user-select: auto;">If <code style="user-select: auto;">graph[a]</code> contains <code style="user-select: auto;">b</code>, then <code style="user-select: auto;">graph[b]</code> contains <code style="user-select: auto;">a</code>.</li>
	<li style="user-select: auto;">The input graph is always connected.</li>
</ul>
</div>