<h2><a href="https://leetcode.com/problems/validate-stack-sequences/">946. Validate Stack Sequences</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given two integer arrays <code style="user-select: auto;">pushed</code> and <code style="user-select: auto;">popped</code> each with distinct values, return <code style="user-select: auto;">true</code><em style="user-select: auto;"> if this could have been the result of a sequence of push and pop operations on an initially empty stack, or </em><code style="user-select: auto;">false</code><em style="user-select: auto;"> otherwise.</em></p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> pushed = [1,2,3,4,5], popped = [4,5,3,2,1]
<strong style="user-select: auto;">Output:</strong> true
<strong style="user-select: auto;">Explanation:</strong> We might do the following sequence:
push(1), push(2), push(3), push(4),
pop() -&gt; 4,
push(5),
pop() -&gt; 5, pop() -&gt; 3, pop() -&gt; 2, pop() -&gt; 1
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> pushed = [1,2,3,4,5], popped = [4,3,5,1,2]
<strong style="user-select: auto;">Output:</strong> false
<strong style="user-select: auto;">Explanation:</strong> 1 cannot be popped before 2.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= pushed.length &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= pushed[i] &lt;= 1000</code></li>
	<li style="user-select: auto;">All the elements of <code style="user-select: auto;">pushed</code> are <strong style="user-select: auto;">unique</strong>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">popped.length == pushed.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">popped</code> is a permutation of <code style="user-select: auto;">pushed</code>.</li>
</ul>
</div>