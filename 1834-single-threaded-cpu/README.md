<h2><a href="https://leetcode.com/problems/single-threaded-cpu/">1834. Single-Threaded CPU</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given <code style="user-select: auto;">n</code>​​​​​​ tasks labeled from <code style="user-select: auto;">0</code> to <code style="user-select: auto;">n - 1</code> represented by a 2D integer array <code style="user-select: auto;">tasks</code>, where <code style="user-select: auto;">tasks[i] = [enqueueTime<sub style="user-select: auto;">i</sub>, processingTime<sub style="user-select: auto;">i</sub>]</code> means that the <code style="user-select: auto;">i<sup style="user-select: auto;">​​​​​​th</sup></code>​​​​ task will be available to process at <code style="user-select: auto;">enqueueTime<sub style="user-select: auto;">i</sub></code> and will take <code style="user-select: auto;">processingTime<sub style="user-select: auto;">i</sub></code><sub style="user-select: auto;"> </sub>to finish processing.</p>

<p style="user-select: auto;">You have a single-threaded CPU that can process <strong style="user-select: auto;">at most one</strong> task at a time and will act in the following way:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">If the CPU is idle and there are no available tasks to process, the CPU remains idle.</li>
	<li style="user-select: auto;">If the CPU is idle and there are available tasks, the CPU will choose the one with the <strong style="user-select: auto;">shortest processing time</strong>. If multiple tasks have the same shortest processing time, it will choose the task with the smallest index.</li>
	<li style="user-select: auto;">Once a task is started, the CPU will <strong style="user-select: auto;">process the entire task</strong> without stopping.</li>
	<li style="user-select: auto;">The CPU can finish a task then start a new one instantly.</li>
</ul>

<p style="user-select: auto;">Return <em style="user-select: auto;">the order in which the CPU will process the tasks.</em></p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> tasks = [[1,2],[2,4],[3,2],[4,1]]
<strong style="user-select: auto;">Output:</strong> [0,2,3,1]
<strong style="user-select: auto;">Explanation: </strong>The events go as follows: 
- At time = 1, task 0 is available to process. Available tasks = {0}.
- Also at time = 1, the idle CPU starts processing task 0. Available tasks = {}.
- At time = 2, task 1 is available to process. Available tasks = {1}.
- At time = 3, task 2 is available to process. Available tasks = {1, 2}.
- Also at time = 3, the CPU finishes task 0 and starts processing task 2 as it is the shortest. Available tasks = {1}.
- At time = 4, task 3 is available to process. Available tasks = {1, 3}.
- At time = 5, the CPU finishes task 2 and starts processing task 3 as it is the shortest. Available tasks = {1}.
- At time = 6, the CPU finishes task 3 and starts processing task 1. Available tasks = {}.
- At time = 10, the CPU finishes task 1 and becomes idle.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> tasks = [[7,10],[7,12],[7,5],[7,4],[7,2]]
<strong style="user-select: auto;">Output:</strong> [4,3,2,0,1]
<strong style="user-select: auto;">Explanation</strong><strong style="user-select: auto;">: </strong>The events go as follows:
- At time = 7, all the tasks become available. Available tasks = {0,1,2,3,4}.
- Also at time = 7, the idle CPU starts processing task 4. Available tasks = {0,1,2,3}.
- At time = 9, the CPU finishes task 4 and starts processing task 3. Available tasks = {0,1,2}.
- At time = 13, the CPU finishes task 3 and starts processing task 2. Available tasks = {0,1}.
- At time = 18, the CPU finishes task 2 and starts processing task 0. Available tasks = {1}.
- At time = 28, the CPU finishes task 0 and starts processing task 1. Available tasks = {}.
- At time = 40, the CPU finishes task 1 and becomes idle.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">tasks.length == n</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= enqueueTime<sub style="user-select: auto;">i</sub>, processingTime<sub style="user-select: auto;">i</sub> &lt;= 10<sup style="user-select: auto;">9</sup></code></li>
</ul>
</div>