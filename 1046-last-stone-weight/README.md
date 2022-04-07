<h2><a href="https://leetcode.com/problems/last-stone-weight/">1046. Last Stone Weight</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given an array of integers <code style="user-select: auto;">stones</code> where <code style="user-select: auto;">stones[i]</code> is the weight of the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> stone.</p>

<p style="user-select: auto;">We are playing a game with the stones. On each turn, we choose the <strong style="user-select: auto;">heaviest two stones</strong> and smash them together. Suppose the heaviest two stones have weights <code style="user-select: auto;">x</code> and <code style="user-select: auto;">y</code> with <code style="user-select: auto;">x &lt;= y</code>. The result of this smash is:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">If <code style="user-select: auto;">x == y</code>, both stones are destroyed, and</li>
	<li style="user-select: auto;">If <code style="user-select: auto;">x != y</code>, the stone of weight <code style="user-select: auto;">x</code> is destroyed, and the stone of weight <code style="user-select: auto;">y</code> has new weight <code style="user-select: auto;">y - x</code>.</li>
</ul>

<p style="user-select: auto;">At the end of the game, there is <strong style="user-select: auto;">at most one</strong> stone left.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the smallest possible weight of the left stone</em>. If there are no stones left, return <code style="user-select: auto;">0</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> stones = [2,7,4,1,8,1]
<strong style="user-select: auto;">Output:</strong> 1
<strong style="user-select: auto;">Explanation:</strong> 
We combine 7 and 8 to get 1 so the array converts to [2,4,1,1,1] then,
we combine 2 and 4 to get 2 so the array converts to [2,1,1,1] then,
we combine 2 and 1 to get 1 so the array converts to [1,1,1] then,
we combine 1 and 1 to get 0 so the array converts to [1] then that's the value of the last stone.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> stones = [1]
<strong style="user-select: auto;">Output:</strong> 1
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= stones.length &lt;= 30</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= stones[i] &lt;= 1000</code></li>
</ul>
</div>