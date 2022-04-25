<h2><a href="https://leetcode.com/problems/peeking-iterator/">284. Peeking Iterator</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Design an iterator that supports the <code style="user-select: auto;">peek</code> operation on an existing iterator in addition to the <code style="user-select: auto;">hasNext</code> and the <code style="user-select: auto;">next</code> operations.</p>

<p style="user-select: auto;">Implement the <code style="user-select: auto;">PeekingIterator</code> class:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">PeekingIterator(Iterator&lt;int&gt; nums)</code> Initializes the object with the given integer iterator <code style="user-select: auto;">iterator</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">int next()</code> Returns the next element in the array and moves the pointer to the next element.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">boolean hasNext()</code> Returns <code style="user-select: auto;">true</code> if there are still elements in the array.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">int peek()</code> Returns the next element in the array <strong style="user-select: auto;">without</strong> moving the pointer.</li>
</ul>

<p style="user-select: auto;"><strong style="user-select: auto;">Note:</strong> Each language may have a different implementation of the constructor and <code style="user-select: auto;">Iterator</code>, but they all support the <code style="user-select: auto;">int next()</code> and <code style="user-select: auto;">boolean hasNext()</code> functions.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input</strong>
["PeekingIterator", "next", "peek", "next", "next", "hasNext"]
[[[1, 2, 3]], [], [], [], [], []]
<strong style="user-select: auto;">Output</strong>
[null, 1, 2, 2, 3, false]

<strong style="user-select: auto;">Explanation</strong>
PeekingIterator peekingIterator = new PeekingIterator([1, 2, 3]); // [<u style="user-select: auto;"><strong style="user-select: auto;">1</strong></u>,2,3]
peekingIterator.next();    // return 1, the pointer moves to the next element [1,<u style="user-select: auto;"><strong style="user-select: auto;">2</strong></u>,3].
peekingIterator.peek();    // return 2, the pointer does not move [1,<u style="user-select: auto;"><strong style="user-select: auto;">2</strong></u>,3].
peekingIterator.next();    // return 2, the pointer moves to the next element [1,2,<u style="user-select: auto;"><strong style="user-select: auto;">3</strong></u>]
peekingIterator.next();    // return 3, the pointer moves to the next element [1,2,3]
peekingIterator.hasNext(); // return False
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums.length &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums[i] &lt;= 1000</code></li>
	<li style="user-select: auto;">All the calls to <code style="user-select: auto;">next</code> and <code style="user-select: auto;">peek</code> are valid.</li>
	<li style="user-select: auto;">At most <code style="user-select: auto;">1000</code> calls will be made to <code style="user-select: auto;">next</code>, <code style="user-select: auto;">hasNext</code>, and <code style="user-select: auto;">peek</code>.</li>
</ul>

<p style="user-select: auto;">&nbsp;</p>
<strong style="user-select: auto;">Follow up:</strong> How would you extend your design to be generic and work with all types, not just integer?</div>