<h2><a href="https://leetcode.com/problems/counting-bits/">338. Counting Bits</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given an integer <code style="user-select: auto;">n</code>, return <em style="user-select: auto;">an array </em><code style="user-select: auto;">ans</code><em style="user-select: auto;"> of length </em><code style="user-select: auto;">n + 1</code><em style="user-select: auto;"> such that for each </em><code style="user-select: auto;">i</code><em style="user-select: auto;"> </em>(<code style="user-select: auto;">0 &lt;= i &lt;= n</code>)<em style="user-select: auto;">, </em><code style="user-select: auto;">ans[i]</code><em style="user-select: auto;"> is the <strong style="user-select: auto;">number of </strong></em><code style="user-select: auto;">1</code><em style="user-select: auto;"><strong style="user-select: auto;">'s</strong> in the binary representation of </em><code style="user-select: auto;">i</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 2
<strong style="user-select: auto;">Output:</strong> [0,1,1]
<strong style="user-select: auto;">Explanation:</strong>
0 --&gt; 0
1 --&gt; 1
2 --&gt; 10
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 5
<strong style="user-select: auto;">Output:</strong> [0,1,1,2,1,2]
<strong style="user-select: auto;">Explanation:</strong>
0 --&gt; 0
1 --&gt; 1
2 --&gt; 10
3 --&gt; 11
4 --&gt; 100
5 --&gt; 101
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= n &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
</ul>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Follow up:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">It is very easy to come up with a solution with a runtime of <code style="user-select: auto;">O(n log n)</code>. Can you do it in linear time <code style="user-select: auto;">O(n)</code> and possibly in a single pass?</li>
	<li style="user-select: auto;">Can you do it without using any built-in function (i.e., like <code style="user-select: auto;">__builtin_popcount</code> in C++)?</li>
</ul>
</div>