<h2><a href="https://leetcode.com/problems/maximum-height-by-stacking-cuboids/">1691. Maximum Height by Stacking Cuboids </a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given <code style="user-select: auto;">n</code> <code style="user-select: auto;">cuboids</code> where the dimensions of the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> cuboid is <code style="user-select: auto;">cuboids[i] = [width<sub style="user-select: auto;">i</sub>, length<sub style="user-select: auto;">i</sub>, height<sub style="user-select: auto;">i</sub>]</code> (<strong style="user-select: auto;">0-indexed</strong>). Choose a <strong style="user-select: auto;">subset</strong> of <code style="user-select: auto;">cuboids</code> and place them on each other.</p>

<p style="user-select: auto;">You can place cuboid <code style="user-select: auto;">i</code> on cuboid <code style="user-select: auto;">j</code> if <code style="user-select: auto;">width<sub style="user-select: auto;">i</sub> &lt;= width<sub style="user-select: auto;">j</sub></code> and <code style="user-select: auto;">length<sub style="user-select: auto;">i</sub> &lt;= length<sub style="user-select: auto;">j</sub></code> and <code style="user-select: auto;">height<sub style="user-select: auto;">i</sub> &lt;= height<sub style="user-select: auto;">j</sub></code>. You can rearrange any cuboid's dimensions by rotating it to put it on another cuboid.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the <strong style="user-select: auto;">maximum height</strong> of the stacked</em> <code style="user-select: auto;">cuboids</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<p style="user-select: auto;"><strong style="user-select: auto;"><img alt="" src="https://assets.leetcode.com/uploads/2019/10/21/image.jpg" style="width: 420px; height: 299px; user-select: auto;"></strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> cuboids = [[50,45,20],[95,37,53],[45,23,12]]
<strong style="user-select: auto;">Output:</strong> 190
<strong style="user-select: auto;">Explanation:</strong>
Cuboid 1 is placed on the bottom with the 53x37 side facing down with height 95.
Cuboid 0 is placed next with the 45x20 side facing down with height 50.
Cuboid 2 is placed next with the 23x12 side facing down with height 45.
The total height is 95 + 50 + 45 = 190.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> cuboids = [[38,25,45],[76,35,3]]
<strong style="user-select: auto;">Output:</strong> 76
<strong style="user-select: auto;">Explanation:</strong>
You can't place any of the cuboids on the other.
We choose cuboid 1 and rotate it so that the 35x3 side is facing down and its height is 76.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> cuboids = [[7,11,17],[7,17,11],[11,7,17],[11,17,7],[17,7,11],[17,11,7]]
<strong style="user-select: auto;">Output:</strong> 102
<strong style="user-select: auto;">Explanation:</strong>
After rearranging the cuboids, you can see that all cuboids have the same dimension.
You can place the 11x7 side down on all cuboids so their heights are 17.
The maximum height of stacked cuboids is 6 * 17 = 102.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">n == cuboids.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= width<sub style="user-select: auto;">i</sub>, length<sub style="user-select: auto;">i</sub>, height<sub style="user-select: auto;">i</sub> &lt;= 100</code></li>
</ul>
</div>