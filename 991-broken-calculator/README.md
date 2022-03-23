<h2><a href="https://leetcode.com/problems/broken-calculator/">991. Broken Calculator</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">There is a broken calculator that has the integer <code style="user-select: auto;">startValue</code> on its display initially. In one operation, you can:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">multiply the number on display by <code style="user-select: auto;">2</code>, or</li>
	<li style="user-select: auto;">subtract <code style="user-select: auto;">1</code> from the number on display.</li>
</ul>

<p style="user-select: auto;">Given two integers <code style="user-select: auto;">startValue</code> and <code style="user-select: auto;">target</code>, return <em style="user-select: auto;">the minimum number of operations needed to display </em><code style="user-select: auto;">target</code><em style="user-select: auto;"> on the calculator</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> startValue = 2, target = 3
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation:</strong> Use double operation and then decrement operation {2 -&gt; 4 -&gt; 3}.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> startValue = 5, target = 8
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation:</strong> Use decrement and then double {5 -&gt; 4 -&gt; 8}.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> startValue = 3, target = 10
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation:</strong> Use double, decrement and double {3 -&gt; 6 -&gt; 5 -&gt; 10}.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= x, y &lt;= 10<sup style="user-select: auto;">9</sup></code></li>
</ul>
</div>