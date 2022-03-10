<h2><a href="https://leetcode.com/problems/container-with-most-water/">11. Container With Most Water</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given an integer array <code style="user-select: auto;">height</code> of length <code style="user-select: auto;">n</code>. There are <code style="user-select: auto;">n</code> vertical lines drawn such that the two endpoints of the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> line are <code style="user-select: auto;">(i, 0)</code> and <code style="user-select: auto;">(i, height[i])</code>.</p>

<p style="user-select: auto;">Find two lines that together with the x-axis form a container, such that the container contains the most water.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the maximum amount of water a container can store</em>.</p>

<p style="user-select: auto;"><strong style="user-select: auto;">Notice</strong> that you may not slant the container.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://s3-lc-upload.s3.amazonaws.com/uploads/2018/07/17/question_11.jpg" style="width: 600px; height: 287px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> height = [1,8,6,2,5,4,8,3,7]
<strong style="user-select: auto;">Output:</strong> 49
<strong style="user-select: auto;">Explanation:</strong> The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this case, the max area of water (blue section) the container can contain is 49.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> height = [1,1]
<strong style="user-select: auto;">Output:</strong> 1
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">n == height.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">2 &lt;= n &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= height[i] &lt;= 10<sup style="user-select: auto;">4</sup></code></li>
</ul>
</div>