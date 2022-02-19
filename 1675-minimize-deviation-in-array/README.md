<h2><a href="https://leetcode.com/problems/minimize-deviation-in-array/">1675. Minimize Deviation in Array</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given an array <code style="user-select: auto;">nums</code> of <code style="user-select: auto;">n</code> positive integers.</p>

<p style="user-select: auto;">You can perform two types of operations on any element of the array any number of times:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">If the element is <strong style="user-select: auto;">even</strong>, <strong style="user-select: auto;">divide</strong> it by <code style="user-select: auto;">2</code>.

	<ul style="user-select: auto;">
		<li style="user-select: auto;">For example, if the array is <code style="user-select: auto;">[1,2,3,4]</code>, then you can do this operation on the last element, and the array will be <code style="user-select: auto;">[1,2,3,<u style="user-select: auto;">2</u>].</code></li>
	</ul>
	</li>
	<li style="user-select: auto;">If the element is <strong style="user-select: auto;">odd</strong>, <strong style="user-select: auto;">multiply</strong> it by <code style="user-select: auto;">2</code>.
	<ul style="user-select: auto;">
		<li style="user-select: auto;">For example, if the array is <code style="user-select: auto;">[1,2,3,4]</code>, then you can do this operation on the first element, and the array will be <code style="user-select: auto;">[<u style="user-select: auto;">2</u>,2,3,4].</code></li>
	</ul>
	</li>
</ul>

<p style="user-select: auto;">The <strong style="user-select: auto;">deviation</strong> of the array is the <strong style="user-select: auto;">maximum difference</strong> between any two elements in the array.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the <strong style="user-select: auto;">minimum deviation</strong> the array can have after performing some number of operations.</em></p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [1,2,3,4]
<strong style="user-select: auto;">Output:</strong> 1
<strong style="user-select: auto;">Explanation:</strong> You can transform the array to [1,2,3,<u style="user-select: auto;">2</u>], then to [<u style="user-select: auto;">2</u>,2,3,2], then the deviation will be 3 - 2 = 1.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [4,1,5,20,3]
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation:</strong> You can transform the array after two operations to [4,<u style="user-select: auto;">2</u>,5,<u style="user-select: auto;">5</u>,3], then the deviation will be 5 - 2 = 3.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [2,10,8]
<strong style="user-select: auto;">Output:</strong> 3
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">n == nums.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">2 &lt;= n &lt;= 10<sup style="user-select: auto;"><span style="font-size: 10.8333px; user-select: auto;">5</span></sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums[i] &lt;= 10<sup style="user-select: auto;">9</sup></code></li>
</ul>
</div>