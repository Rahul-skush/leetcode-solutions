<h2><a href="https://leetcode.com/problems/combination-sum-iii/">216. Combination Sum III</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Find all valid combinations of <code style="user-select: auto;">k</code> numbers that sum up to <code style="user-select: auto;">n</code> such that the following conditions are true:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">Only numbers <code style="user-select: auto;">1</code> through <code style="user-select: auto;">9</code> are used.</li>
	<li style="user-select: auto;">Each number is used <strong style="user-select: auto;">at most once</strong>.</li>
</ul>

<p style="user-select: auto;">Return <em style="user-select: auto;">a list of all possible valid combinations</em>. The list must not contain the same combination twice, and the combinations may be returned in any order.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> k = 3, n = 7
<strong style="user-select: auto;">Output:</strong> [[1,2,4]]
<strong style="user-select: auto;">Explanation:</strong>
1 + 2 + 4 = 7
There are no other valid combinations.</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> k = 3, n = 9
<strong style="user-select: auto;">Output:</strong> [[1,2,6],[1,3,5],[2,3,4]]
<strong style="user-select: auto;">Explanation:</strong>
1 + 2 + 6 = 9
1 + 3 + 5 = 9
2 + 3 + 4 = 9
There are no other valid combinations.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> k = 4, n = 1
<strong style="user-select: auto;">Output:</strong> []
<strong style="user-select: auto;">Explanation:</strong> There are no valid combinations.
Using 4 different numbers in the range [1,9], the smallest sum we can get is 1+2+3+4 = 10 and since 10 &gt; 1, there are no valid combination.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">2 &lt;= k &lt;= 9</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n &lt;= 60</code></li>
</ul>
</div>