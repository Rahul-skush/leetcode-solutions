<h2><a href="https://leetcode.com/problems/maximum-number-of-weeks-for-which-you-can-work/">1953. Maximum Number of Weeks for Which You Can Work</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">There are <code style="user-select: auto;">n</code> projects numbered from <code style="user-select: auto;">0</code> to <code style="user-select: auto;">n - 1</code>. You are given an integer array <code style="user-select: auto;">milestones</code> where each <code style="user-select: auto;">milestones[i]</code> denotes the number of milestones the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> project has.</p>

<p style="user-select: auto;">You can work on the projects following these two rules:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">Every week, you will finish <strong style="user-select: auto;">exactly one</strong> milestone of <strong style="user-select: auto;">one</strong> project. You&nbsp;<strong style="user-select: auto;">must</strong>&nbsp;work every week.</li>
	<li style="user-select: auto;">You <strong style="user-select: auto;">cannot</strong> work on two milestones from the same project for two <strong style="user-select: auto;">consecutive</strong> weeks.</li>
</ul>

<p style="user-select: auto;">Once all the milestones of all the projects are finished, or if the only milestones that you can work on will cause you to violate the above rules, you will <strong style="user-select: auto;">stop working</strong>. Note that you may not be able to finish every project's milestones due to these constraints.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the <strong style="user-select: auto;">maximum</strong> number of weeks you would be able to work on the projects without violating the rules mentioned above</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> milestones = [1,2,3]
<strong style="user-select: auto;">Output:</strong> 6
<strong style="user-select: auto;">Explanation:</strong> One possible scenario is:
​​​​- During the 1<sup style="user-select: auto;">st</sup> week, you will work on a milestone of project 0.
- During the 2<sup style="user-select: auto;">nd</sup> week, you will work on a milestone of project 2.
- During the 3<sup style="user-select: auto;">rd</sup> week, you will work on a milestone of project 1.
- During the 4<sup style="user-select: auto;">th</sup> week, you will work on a milestone of project 2.
- During the 5<sup style="user-select: auto;">th</sup> week, you will work on a milestone of project 1.
- During the 6<sup style="user-select: auto;">th</sup> week, you will work on a milestone of project 2.
The total number of weeks is 6.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> milestones = [5,2,1]
<strong style="user-select: auto;">Output:</strong> 7
<strong style="user-select: auto;">Explanation:</strong> One possible scenario is:
- During the 1<sup style="user-select: auto;">st</sup> week, you will work on a milestone of project 0.
- During the 2<sup style="user-select: auto;">nd</sup> week, you will work on a milestone of project 1.
- During the 3<sup style="user-select: auto;">rd</sup> week, you will work on a milestone of project 0.
- During the 4<sup style="user-select: auto;">th</sup> week, you will work on a milestone of project 1.
- During the 5<sup style="user-select: auto;">th</sup> week, you will work on a milestone of project 0.
- During the 6<sup style="user-select: auto;">th</sup> week, you will work on a milestone of project 2.
- During the 7<sup style="user-select: auto;">th</sup> week, you will work on a milestone of project 0.
The total number of weeks is 7.
Note that you cannot work on the last milestone of project 0 on 8<sup style="user-select: auto;">th</sup> week because it would violate the rules.
Thus, one milestone in project 0 will remain unfinished.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">n == milestones.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= milestones[i] &lt;= 10<sup style="user-select: auto;">9</sup></code></li>
</ul>
</div>