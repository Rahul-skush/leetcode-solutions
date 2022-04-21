<h2><a href="https://leetcode.com/problems/design-hashset/">705. Design HashSet</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Design a HashSet without using any built-in hash table libraries.</p>

<p style="user-select: auto;">Implement <code style="user-select: auto;">MyHashSet</code> class:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">void add(key)</code> Inserts the value <code style="user-select: auto;">key</code> into the HashSet.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">bool contains(key)</code> Returns whether the value <code style="user-select: auto;">key</code> exists in the HashSet or not.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">void remove(key)</code> Removes the value <code style="user-select: auto;">key</code> in the HashSet. If <code style="user-select: auto;">key</code> does not exist in the HashSet, do nothing.</li>
</ul>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input</strong>
["MyHashSet", "add", "add", "contains", "contains", "add", "contains", "remove", "contains"]
[[], [1], [2], [1], [3], [2], [2], [2], [2]]
<strong style="user-select: auto;">Output</strong>
[null, null, null, true, false, null, true, null, false]

<strong style="user-select: auto;">Explanation</strong>
MyHashSet myHashSet = new MyHashSet();
myHashSet.add(1);      // set = [1]
myHashSet.add(2);      // set = [1, 2]
myHashSet.contains(1); // return True
myHashSet.contains(3); // return False, (not found)
myHashSet.add(2);      // set = [1, 2]
myHashSet.contains(2); // return True
myHashSet.remove(2);   // set = [1]
myHashSet.contains(2); // return False, (already removed)</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= key &lt;= 10<sup style="user-select: auto;">6</sup></code></li>
	<li style="user-select: auto;">At most <code style="user-select: auto;">10<sup style="user-select: auto;">4</sup></code> calls will be made to <code style="user-select: auto;">add</code>, <code style="user-select: auto;">remove</code>, and <code style="user-select: auto;">contains</code>.</li>
</ul>
</div>