<h2><a href="https://leetcode.com/problems/plates-between-candles/">2055. Plates Between Candles</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">There is a long table with a line of plates and candles arranged on top of it. You are given a <strong style="user-select: auto;">0-indexed</strong> string <code style="user-select: auto;">s</code> consisting of characters <code style="user-select: auto;">'*'</code> and <code style="user-select: auto;">'|'</code> only, where a <code style="user-select: auto;">'*'</code> represents a <strong style="user-select: auto;">plate</strong> and a <code style="user-select: auto;">'|'</code> represents a <strong style="user-select: auto;">candle</strong>.</p>

<p style="user-select: auto;">You are also given a <strong style="user-select: auto;">0-indexed</strong> 2D integer array <code style="user-select: auto;">queries</code> where <code style="user-select: auto;">queries[i] = [left<sub style="user-select: auto;">i</sub>, right<sub style="user-select: auto;">i</sub>]</code> denotes the <strong style="user-select: auto;">substring</strong> <code style="user-select: auto;">s[left<sub style="user-select: auto;">i</sub>...right<sub style="user-select: auto;">i</sub>]</code> (<strong style="user-select: auto;">inclusive</strong>). For each query, you need to find the <strong style="user-select: auto;">number</strong> of plates <strong style="user-select: auto;">between candles</strong> that are <strong style="user-select: auto;">in the substring</strong>. A plate is considered <strong style="user-select: auto;">between candles</strong> if there is at least one candle to its left <strong style="user-select: auto;">and</strong> at least one candle to its right <strong style="user-select: auto;">in the substring</strong>.</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">For example, <code style="user-select: auto;">s = "||**||**|*"</code>, and a query <code style="user-select: auto;">[3, 8]</code> denotes the substring <code style="user-select: auto;">"*||<strong style="user-select: auto;"><u style="user-select: auto;">**</u></strong>|"</code>. The number of plates between candles in this substring is <code style="user-select: auto;">2</code>, as each of the two plates has at least one candle <strong style="user-select: auto;">in the substring</strong> to its left <strong style="user-select: auto;">and</strong> right.</li>
</ul>

<p style="user-select: auto;">Return <em style="user-select: auto;">an integer array</em> <code style="user-select: auto;">answer</code> <em style="user-select: auto;">where</em> <code style="user-select: auto;">answer[i]</code> <em style="user-select: auto;">is the answer to the</em> <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> <em style="user-select: auto;">query</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="ex-1" src="https://assets.leetcode.com/uploads/2021/10/04/ex-1.png" style="width: 400px; height: 134px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "**|**|***|", queries = [[2,5],[5,9]]
<strong style="user-select: auto;">Output:</strong> [2,3]
<strong style="user-select: auto;">Explanation:</strong>
- queries[0] has two plates between candles.
- queries[1] has three plates between candles.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>
<img alt="ex-2" src="https://assets.leetcode.com/uploads/2021/10/04/ex-2.png" style="width: 600px; height: 193px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "***|**|*****|**||**|*", queries = [[1,17],[4,5],[14,17],[5,11],[15,16]]
<strong style="user-select: auto;">Output:</strong> [9,0,0,0,0]
<strong style="user-select: auto;">Explanation:</strong>
- queries[0] has nine plates between candles.
- The other queries have zero plates between candles.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">3 &lt;= s.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">s</code> consists of <code style="user-select: auto;">'*'</code> and <code style="user-select: auto;">'|'</code> characters.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= queries.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">queries[i].length == 2</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= left<sub style="user-select: auto;">i</sub> &lt;= right<sub style="user-select: auto;">i</sub> &lt; s.length</code></li>
</ul>
</div>