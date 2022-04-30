<h2><a href="https://leetcode.com/problems/evaluate-division/">399. Evaluate Division</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given an array of variable pairs <code style="user-select: auto;">equations</code> and an array of real numbers <code style="user-select: auto;">values</code>, where <code style="user-select: auto;">equations[i] = [A<sub style="user-select: auto;">i</sub>, B<sub style="user-select: auto;">i</sub>]</code> and <code style="user-select: auto;">values[i]</code> represent the equation <code style="user-select: auto;">A<sub style="user-select: auto;">i</sub> / B<sub style="user-select: auto;">i</sub> = values[i]</code>. Each <code style="user-select: auto;">A<sub style="user-select: auto;">i</sub></code> or <code style="user-select: auto;">B<sub style="user-select: auto;">i</sub></code> is a string that represents a single variable.</p>

<p style="user-select: auto;">You are also given some <code style="user-select: auto;">queries</code>, where <code style="user-select: auto;">queries[j] = [C<sub style="user-select: auto;">j</sub>, D<sub style="user-select: auto;">j</sub>]</code> represents the <code style="user-select: auto;">j<sup style="user-select: auto;">th</sup></code> query where you must find the answer for <code style="user-select: auto;">C<sub style="user-select: auto;">j</sub> / D<sub style="user-select: auto;">j</sub> = ?</code>.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the answers to all queries</em>. If a single answer cannot be determined, return <code style="user-select: auto;">-1.0</code>.</p>

<p style="user-select: auto;"><strong style="user-select: auto;">Note:</strong> The input is always valid. You may assume that evaluating the queries will not result in division by zero and that there is no contradiction.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> equations = [["a","b"],["b","c"]], values = [2.0,3.0], queries = [["a","c"],["b","a"],["a","e"],["a","a"],["x","x"]]
<strong style="user-select: auto;">Output:</strong> [6.00000,0.50000,-1.00000,1.00000,-1.00000]
<strong style="user-select: auto;">Explanation:</strong> 
Given: <em style="user-select: auto;">a / b = 2.0</em>, <em style="user-select: auto;">b / c = 3.0</em>
queries are: <em style="user-select: auto;">a / c = ?</em>, <em style="user-select: auto;">b / a = ?</em>, <em style="user-select: auto;">a / e = ?</em>, <em style="user-select: auto;">a / a = ?</em>, <em style="user-select: auto;">x / x = ?</em>
return: [6.0, 0.5, -1.0, 1.0, -1.0 ]
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> equations = [["a","b"],["b","c"],["bc","cd"]], values = [1.5,2.5,5.0], queries = [["a","c"],["c","b"],["bc","cd"],["cd","bc"]]
<strong style="user-select: auto;">Output:</strong> [3.75000,0.40000,5.00000,0.20000]
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> equations = [["a","b"]], values = [0.5], queries = [["a","b"],["b","a"],["a","c"],["x","y"]]
<strong style="user-select: auto;">Output:</strong> [0.50000,2.00000,-1.00000,-1.00000]
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= equations.length &lt;= 20</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">equations[i].length == 2</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= A<sub style="user-select: auto;">i</sub>.length, B<sub style="user-select: auto;">i</sub>.length &lt;= 5</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">values.length == equations.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0.0 &lt; values[i] &lt;= 20.0</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= queries.length &lt;= 20</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">queries[i].length == 2</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= C<sub style="user-select: auto;">j</sub>.length, D<sub style="user-select: auto;">j</sub>.length &lt;= 5</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">A<sub style="user-select: auto;">i</sub>, B<sub style="user-select: auto;">i</sub>, C<sub style="user-select: auto;">j</sub>, D<sub style="user-select: auto;">j</sub></code> consist of lower case English letters and digits.</li>
</ul>
</div>