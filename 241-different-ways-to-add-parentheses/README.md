<h2><a href="https://leetcode.com/problems/different-ways-to-add-parentheses/">241. Different Ways to Add Parentheses</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given a string <code style="user-select: auto;">expression</code> of numbers and operators, return <em style="user-select: auto;">all possible results from computing all the different possible ways to group numbers and operators</em>. You may return the answer in <strong style="user-select: auto;">any order</strong>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> expression = "2-1-1"
<strong style="user-select: auto;">Output:</strong> [0,2]
<strong style="user-select: auto;">Explanation:</strong>
((2-1)-1) = 0 
(2-(1-1)) = 2
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> expression = "2*3-4*5"
<strong style="user-select: auto;">Output:</strong> [-34,-14,-10,-10,10]
<strong style="user-select: auto;">Explanation:</strong>
(2*(3-(4*5))) = -34 
((2*3)-(4*5)) = -14 
((2*(3-4))*5) = -10 
(2*((3-4)*5)) = -10 
(((2*3)-4)*5) = 10
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= expression.length &lt;= 20</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">expression</code> consists of digits and the operator <code style="user-select: auto;">'+'</code>, <code style="user-select: auto;">'-'</code>, and <code style="user-select: auto;">'*'</code>.</li>
	<li style="user-select: auto;">All the integer values in the input expression are in the range <code style="user-select: auto;">[0, 99]</code>.</li>
</ul>
</div>