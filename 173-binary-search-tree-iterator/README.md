<h2><a href="https://leetcode.com/problems/binary-search-tree-iterator/">173. Binary Search Tree Iterator</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Implement the <code style="user-select: auto;">BSTIterator</code> class that represents an iterator over the <strong style="user-select: auto;"><a href="https://en.wikipedia.org/wiki/Tree_traversal#In-order_(LNR)" target="_blank" style="user-select: auto;">in-order traversal</a></strong> of a binary search tree (BST):</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">BSTIterator(TreeNode root)</code> Initializes an object of the <code style="user-select: auto;">BSTIterator</code> class. The <code style="user-select: auto;">root</code> of the BST is given as part of the constructor. The pointer should be initialized to a non-existent number smaller than any element in the BST.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">boolean hasNext()</code> Returns <code style="user-select: auto;">true</code> if there exists a number in the traversal to the right of the pointer, otherwise returns <code style="user-select: auto;">false</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">int next()</code> Moves the pointer to the right, then returns the number at the pointer.</li>
</ul>

<p style="user-select: auto;">Notice that by initializing the pointer to a non-existent smallest number, the first call to <code style="user-select: auto;">next()</code> will return the smallest element in the BST.</p>

<p style="user-select: auto;">You may assume that <code style="user-select: auto;">next()</code> calls will always be valid. That is, there will be at least a next number in the in-order traversal when <code style="user-select: auto;">next()</code> is called.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2018/12/25/bst-tree.png" style="width: 189px; height: 178px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input</strong>
["BSTIterator", "next", "next", "hasNext", "next", "hasNext", "next", "hasNext", "next", "hasNext"]
[[[7, 3, 15, null, null, 9, 20]], [], [], [], [], [], [], [], [], []]
<strong style="user-select: auto;">Output</strong>
[null, 3, 7, true, 9, true, 15, true, 20, false]

<strong style="user-select: auto;">Explanation</strong>
BSTIterator bSTIterator = new BSTIterator([7, 3, 15, null, null, 9, 20]);
bSTIterator.next();    // return 3
bSTIterator.next();    // return 7
bSTIterator.hasNext(); // return True
bSTIterator.next();    // return 9
bSTIterator.hasNext(); // return True
bSTIterator.next();    // return 15
bSTIterator.hasNext(); // return True
bSTIterator.next();    // return 20
bSTIterator.hasNext(); // return False
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">The number of nodes in the tree is in the range <code style="user-select: auto;">[1, 10<sup style="user-select: auto;">5</sup>]</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= Node.val &lt;= 10<sup style="user-select: auto;">6</sup></code></li>
	<li style="user-select: auto;">At most <code style="user-select: auto;">10<sup style="user-select: auto;">5</sup></code> calls will be made to <code style="user-select: auto;">hasNext</code>, and <code style="user-select: auto;">next</code>.</li>
</ul>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Follow up:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">Could you implement <code style="user-select: auto;">next()</code> and <code style="user-select: auto;">hasNext()</code> to run in average <code style="user-select: auto;">O(1)</code> time and use&nbsp;<code style="user-select: auto;">O(h)</code> memory, where <code style="user-select: auto;">h</code> is the height of the tree?</li>
</ul>
</div>