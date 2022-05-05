<h2><a href="https://leetcode.com/problems/implement-stack-using-queues/">225. Implement Stack using Queues</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Implement a last-in-first-out (LIFO) stack using only two queues. The implemented stack should support all the functions of a normal stack (<code style="user-select: auto;">push</code>, <code style="user-select: auto;">top</code>, <code style="user-select: auto;">pop</code>, and <code style="user-select: auto;">empty</code>).</p>

<p style="user-select: auto;">Implement the <code style="user-select: auto;">MyStack</code> class:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">void push(int x)</code> Pushes element x to the top of the stack.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">int pop()</code> Removes the element on the top of the stack and returns it.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">int top()</code> Returns the element on the top of the stack.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">boolean empty()</code> Returns <code style="user-select: auto;">true</code> if the stack is empty, <code style="user-select: auto;">false</code> otherwise.</li>
</ul>

<p style="user-select: auto;"><b style="user-select: auto;">Notes:</b></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">You must use <strong style="user-select: auto;">only</strong> standard operations of a queue, which means that only <code style="user-select: auto;">push to back</code>, <code style="user-select: auto;">peek/pop from front</code>, <code style="user-select: auto;">size</code> and <code style="user-select: auto;">is empty</code> operations are valid.</li>
	<li style="user-select: auto;">Depending on your language, the queue may not be supported natively. You may simulate a queue using a list or deque (double-ended queue) as long as you use only a queue's standard operations.</li>
</ul>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input</strong>
["MyStack", "push", "push", "top", "pop", "empty"]
[[], [1], [2], [], [], []]
<strong style="user-select: auto;">Output</strong>
[null, null, null, 2, 2, false]

<strong style="user-select: auto;">Explanation</strong>
MyStack myStack = new MyStack();
myStack.push(1);
myStack.push(2);
myStack.top(); // return 2
myStack.pop(); // return 2
myStack.empty(); // return False
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= x &lt;= 9</code></li>
	<li style="user-select: auto;">At most <code style="user-select: auto;">100</code> calls will be made to <code style="user-select: auto;">push</code>, <code style="user-select: auto;">pop</code>, <code style="user-select: auto;">top</code>, and <code style="user-select: auto;">empty</code>.</li>
	<li style="user-select: auto;">All the calls to <code style="user-select: auto;">pop</code> and <code style="user-select: auto;">top</code> are valid.</li>
</ul>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Follow-up:</strong> Can you implement the stack using only one queue?</p>
</div>