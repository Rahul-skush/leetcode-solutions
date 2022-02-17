<h2><a href="https://leetcode.com/problems/combination-sum/">39. Combination Sum</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given an array of <strong style="user-select: auto;">distinct</strong> integers <code style="user-select: auto;">candidates</code> and a target integer <code style="user-select: auto;">target</code>, return <em style="user-select: auto;">a list of all <strong style="user-select: auto;">unique combinations</strong> of </em><code style="user-select: auto;">candidates</code><em style="user-select: auto;"> where the chosen numbers sum to </em><code style="user-select: auto;">target</code><em style="user-select: auto;">.</em> You may return the combinations in <strong style="user-select: auto;">any order</strong>.</p>

<p style="user-select: auto;">The <strong style="user-select: auto;">same</strong> number may be chosen from <code style="user-select: auto;">candidates</code> an <strong style="user-select: auto;">unlimited number of times</strong>. Two combinations are unique if the frequency of at least one of the chosen numbers is different.</p>

<p style="user-select: auto;">It is <strong style="user-select: auto;">guaranteed</strong> that the number of unique combinations that sum up to <code style="user-select: auto;">target</code> is less than <code style="user-select: auto;">150</code> combinations for the given input.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> candidates = [2,3,6,7], target = 7
<strong style="user-select: auto;">Output:</strong> [[2,2,3],[7]]
<strong style="user-select: auto;">Explanation:</strong>
2 and 3 are candidates, and 2 + 2 + 3 = 7. Note that 2 can be used multiple times.
7 is a candidate, and 7 = 7.
These are the only two combinations.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> candidates = [2,3,5], target = 8
<strong style="user-select: auto;">Output:</strong> [[2,2,2,2],[2,3,3],[3,5]]
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> candidates = [2], target = 1
<strong style="user-select: auto;">Output:</strong> []
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= candidates.length &lt;= 30</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= candidates[i] &lt;= 200</code></li>
	<li style="user-select: auto;">All elements of <code style="user-select: auto;">candidates</code> are <strong style="user-select: auto;">distinct</strong>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= target &lt;= 500</code></li>
</ul>
</div>