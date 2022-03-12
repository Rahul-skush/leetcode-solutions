<h2><a href="https://leetcode.com/problems/copy-list-with-random-pointer/">138. Copy List with Random Pointer</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">A linked list of length <code style="user-select: auto;">n</code> is given such that each node contains an additional random pointer, which could point to any node in the list, or <code style="user-select: auto;">null</code>.</p>

<p style="user-select: auto;">Construct a <a href="https://en.wikipedia.org/wiki/Object_copying#Deep_copy" target="_blank" style="user-select: auto;"><strong style="user-select: auto;">deep copy</strong></a> of the list. The deep copy should consist of exactly <code style="user-select: auto;">n</code> <strong style="user-select: auto;">brand new</strong> nodes, where each new node has its value set to the value of its corresponding original node. Both the <code style="user-select: auto;">next</code> and <code style="user-select: auto;">random</code> pointer of the new nodes should point to new nodes in the copied list such that the pointers in the original list and copied list represent the same list state. <strong style="user-select: auto;">None of the pointers in the new list should point to nodes in the original list</strong>.</p>

<p style="user-select: auto;">For example, if there are two nodes <code style="user-select: auto;">X</code> and <code style="user-select: auto;">Y</code> in the original list, where <code style="user-select: auto;">X.random --&gt; Y</code>, then for the corresponding two nodes <code style="user-select: auto;">x</code> and <code style="user-select: auto;">y</code> in the copied list, <code style="user-select: auto;">x.random --&gt; y</code>.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the head of the copied linked list</em>.</p>

<p style="user-select: auto;">The linked list is represented in the input/output as a list of <code style="user-select: auto;">n</code> nodes. Each node is represented as a pair of <code style="user-select: auto;">[val, random_index]</code> where:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">val</code>: an integer representing <code style="user-select: auto;">Node.val</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">random_index</code>: the index of the node (range from <code style="user-select: auto;">0</code> to <code style="user-select: auto;">n-1</code>) that the <code style="user-select: auto;">random</code> pointer points to, or <code style="user-select: auto;">null</code> if it does not point to any node.</li>
</ul>

<p style="user-select: auto;">Your code will <strong style="user-select: auto;">only</strong> be given the <code style="user-select: auto;">head</code> of the original linked list.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2019/12/18/e1.png" style="width: 700px; height: 142px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> head = [[7,null],[13,0],[11,4],[10,2],[1,0]]
<strong style="user-select: auto;">Output:</strong> [[7,null],[13,0],[11,4],[10,2],[1,0]]
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2019/12/18/e2.png" style="width: 700px; height: 114px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> head = [[1,1],[2,1]]
<strong style="user-select: auto;">Output:</strong> [[1,1],[2,1]]
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<p style="user-select: auto;"><strong style="user-select: auto;"><img alt="" src="https://assets.leetcode.com/uploads/2019/12/18/e3.png" style="width: 700px; height: 122px; user-select: auto;"></strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> head = [[3,null],[3,0],[3,null]]
<strong style="user-select: auto;">Output:</strong> [[3,null],[3,0],[3,null]]
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= n &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">-10<sup style="user-select: auto;">4</sup> &lt;= Node.val &lt;= 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">Node.random</code> is <code style="user-select: auto;">null</code> or is pointing to some node in the linked list.</li>
</ul>
</div>