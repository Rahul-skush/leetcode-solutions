<h2><a href="https://leetcode.com/problems/minimum-domino-rotations-for-equal-row/">1007. Minimum Domino Rotations For Equal Row</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">In a row of dominoes, <code style="user-select: auto;">tops[i]</code> and <code style="user-select: auto;">bottoms[i]</code> represent the top and bottom halves of the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> domino. (A domino is a tile with two numbers from 1 to 6 - one on each half of the tile.)</p>

<p style="user-select: auto;">We may rotate the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> domino, so that <code style="user-select: auto;">tops[i]</code> and <code style="user-select: auto;">bottoms[i]</code> swap values.</p>

<p style="user-select: auto;">Return the minimum number of rotations so that all the values in <code style="user-select: auto;">tops</code> are the same, or all the values in <code style="user-select: auto;">bottoms</code> are the same.</p>

<p style="user-select: auto;">If it cannot be done, return <code style="user-select: auto;">-1</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/05/14/domino.png" style="height: 300px; width: 421px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> tops = [2,1,2,4,2,2], bottoms = [5,2,6,2,3,2]
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation:</strong> 
The first figure represents the dominoes as given by tops and bottoms: before we do any rotations.
If we rotate the second and fourth dominoes, we can make every value in the top row equal to 2, as indicated by the second figure.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> tops = [3,5,1,2,3], bottoms = [3,6,3,3,4]
<strong style="user-select: auto;">Output:</strong> -1
<strong style="user-select: auto;">Explanation:</strong> 
In this case, it is not possible to rotate the dominoes to make one row of values equal.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">2 &lt;= tops.length &lt;= 2 * 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">bottoms.length == tops.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= tops[i], bottoms[i] &lt;= 6</code></li>
</ul>
</div>