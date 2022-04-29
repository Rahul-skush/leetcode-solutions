<h2><a href="https://leetcode.com/problems/is-graph-bipartite/">785. Is Graph Bipartite?</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">There is an <strong style="user-select: auto;">undirected</strong> graph with <code style="user-select: auto;">n</code> nodes, where each node is numbered between <code style="user-select: auto;">0</code> and <code style="user-select: auto;">n - 1</code>. You are given a 2D array <code style="user-select: auto;">graph</code>, where <code style="user-select: auto;">graph[u]</code> is an array of nodes that node <code style="user-select: auto;">u</code> is adjacent to. More formally, for each <code style="user-select: auto;">v</code> in <code style="user-select: auto;">graph[u]</code>, there is an undirected edge between node <code style="user-select: auto;">u</code> and node <code style="user-select: auto;">v</code>. The graph has the following properties:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">There are no self-edges (<code style="user-select: auto;">graph[u]</code> does not contain <code style="user-select: auto;">u</code>).</li>
	<li style="user-select: auto;">There are no parallel edges (<code style="user-select: auto;">graph[u]</code> does not contain duplicate values).</li>
	<li style="user-select: auto;">If <code style="user-select: auto;">v</code> is in <code style="user-select: auto;">graph[u]</code>, then <code style="user-select: auto;">u</code> is in <code style="user-select: auto;">graph[v]</code> (the graph is undirected).</li>
	<li style="user-select: auto;">The graph may not be connected, meaning there may be two nodes <code style="user-select: auto;">u</code> and <code style="user-select: auto;">v</code> such that there is no path between them.</li>
</ul>

<p style="user-select: auto;">A graph is <strong style="user-select: auto;">bipartite</strong> if the nodes can be partitioned into two independent sets <code style="user-select: auto;">A</code> and <code style="user-select: auto;">B</code> such that <strong style="user-select: auto;">every</strong> edge in the graph connects a node in set <code style="user-select: auto;">A</code> and a node in set <code style="user-select: auto;">B</code>.</p>

<p style="user-select: auto;">Return <code style="user-select: auto;">true</code><em style="user-select: auto;"> if and only if it is <strong style="user-select: auto;">bipartite</strong></em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/10/21/bi2.jpg" style="width: 222px; height: 222px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> graph = [[1,2,3],[0,2],[0,1,3],[0,2]]
<strong style="user-select: auto;">Output:</strong> false
<strong style="user-select: auto;">Explanation:</strong> There is no way to partition the nodes into two independent sets such that every edge connects a node in one and a node in the other.</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/10/21/bi1.jpg" style="width: 222px; height: 222px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> graph = [[1,3],[0,2],[1,3],[0,2]]
<strong style="user-select: auto;">Output:</strong> true
<strong style="user-select: auto;">Explanation:</strong> We can partition the nodes into two sets: {0, 2} and {1, 3}.</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">graph.length == n</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= graph[u].length &lt; n</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= graph[u][i] &lt;= n - 1</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">graph[u]</code>&nbsp;does not contain&nbsp;<code style="user-select: auto;">u</code>.</li>
	<li style="user-select: auto;">All the values of <code style="user-select: auto;">graph[u]</code> are <strong style="user-select: auto;">unique</strong>.</li>
	<li style="user-select: auto;">If <code style="user-select: auto;">graph[u]</code> contains <code style="user-select: auto;">v</code>, then <code style="user-select: auto;">graph[v]</code> contains <code style="user-select: auto;">u</code>.</li>
</ul>
</div>