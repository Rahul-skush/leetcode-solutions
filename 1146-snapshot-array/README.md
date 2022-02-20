<h2><a href="https://leetcode.com/problems/snapshot-array/">1146. Snapshot Array</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Implement a SnapshotArray that supports the following interface:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">SnapshotArray(int length)</code> initializes an array-like data structure with the given length.&nbsp; <strong style="user-select: auto;">Initially, each element equals 0</strong>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">void set(index, val)</code> sets the element at the given <code style="user-select: auto;">index</code> to be equal to <code style="user-select: auto;">val</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">int snap()</code>&nbsp;takes a snapshot of the array and returns the <code style="user-select: auto;">snap_id</code>: the total number of times we called <code style="user-select: auto;">snap()</code> minus <code style="user-select: auto;">1</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">int get(index, snap_id)</code>&nbsp;returns the value at the given <code style="user-select: auto;">index</code>, at the time we took the snapshot with the given <code style="user-select: auto;">snap_id</code></li>
</ul>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> ["SnapshotArray","set","snap","set","get"]
[[3],[0,5],[],[0,6],[0,0]]
<strong style="user-select: auto;">Output:</strong> [null,null,0,null,5]
<strong style="user-select: auto;">Explanation: </strong>
SnapshotArray snapshotArr = new SnapshotArray(3); // set the length to be 3
snapshotArr.set(0,5);  // Set array[0] = 5
snapshotArr.snap();  // Take a snapshot, return snap_id = 0
snapshotArr.set(0,6);
snapshotArr.get(0,0);  // Get the value of array[0] with snap_id = 0, return 5</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= length&nbsp;&lt;= 50000</code></li>
	<li style="user-select: auto;">At most <code style="user-select: auto;">50000</code>&nbsp;calls will be made to <code style="user-select: auto;">set</code>, <code style="user-select: auto;">snap</code>, and <code style="user-select: auto;">get</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= index&nbsp;&lt;&nbsp;length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;=&nbsp;snap_id &lt;&nbsp;</code>(the total number of times we call <code style="user-select: auto;">snap()</code>)</li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;=&nbsp;val &lt;= 10^9</code></li>
</ul>
</div>