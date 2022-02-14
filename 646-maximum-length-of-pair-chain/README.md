<h2><a href="https://leetcode.com/problems/maximum-length-of-pair-chain/">646. Maximum Length of Pair Chain</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given an array of <code style="user-select: auto;">n</code> pairs <code style="user-select: auto;">pairs</code> where <code style="user-select: auto;">pairs[i] = [left<sub style="user-select: auto;">i</sub>, right<sub style="user-select: auto;">i</sub>]</code> and <code style="user-select: auto;">left<sub style="user-select: auto;">i</sub> &lt; right<sub style="user-select: auto;">i</sub></code>.</p>

<p style="user-select: auto;">A pair <code style="user-select: auto;">p2 = [c, d]</code> <strong style="user-select: auto;">follows</strong> a pair <code style="user-select: auto;">p1 = [a, b]</code> if <code style="user-select: auto;">b &lt; c</code>. A <strong style="user-select: auto;">chain</strong> of pairs can be formed in this fashion.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the length longest chain which can be formed</em>.</p>

<p style="user-select: auto;">You do not need to use up all the given intervals. You can select pairs in any order.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> pairs = [[1,2],[2,3],[3,4]]
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation:</strong> The longest chain is [1,2] -&gt; [3,4].
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> pairs = [[1,2],[7,8],[4,5]]
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation:</strong> The longest chain is [1,2] -&gt; [4,5] -&gt; [7,8].
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">n == pairs.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">-1000 &lt;= left<sub style="user-select: auto;">i</sub> &lt; right<sub style="user-select: auto;">i</sub> &lt;= 1000</code></li>
</ul>
</div>