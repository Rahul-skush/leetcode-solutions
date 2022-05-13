<h2><a href="https://leetcode.com/problems/insert-delete-getrandom-o1/">380. Insert Delete GetRandom O(1)</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Implement the <code style="user-select: auto;">RandomizedSet</code> class:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">RandomizedSet()</code> Initializes the <code style="user-select: auto;">RandomizedSet</code> object.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">bool insert(int val)</code> Inserts an item <code style="user-select: auto;">val</code> into the set if not present. Returns <code style="user-select: auto;">true</code> if the item was not present, <code style="user-select: auto;">false</code> otherwise.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">bool remove(int val)</code> Removes an item <code style="user-select: auto;">val</code> from the set if present. Returns <code style="user-select: auto;">true</code> if the item was present, <code style="user-select: auto;">false</code> otherwise.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">int getRandom()</code> Returns a random element from the current set of elements (it's guaranteed that at least one element exists when this method is called). Each element must have the <b style="user-select: auto;">same probability</b> of being returned.</li>
</ul>

<p style="user-select: auto;">You must implement the functions of the class such that each function works in&nbsp;<strong style="user-select: auto;">average</strong>&nbsp;<code style="user-select: auto;">O(1)</code>&nbsp;time complexity.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input</strong>
["RandomizedSet", "insert", "remove", "insert", "getRandom", "remove", "insert", "getRandom"]
[[], [1], [2], [2], [], [1], [2], []]
<strong style="user-select: auto;">Output</strong>
[null, true, false, true, 2, true, false, 2]

<strong style="user-select: auto;">Explanation</strong>
RandomizedSet randomizedSet = new RandomizedSet();
randomizedSet.insert(1); // Inserts 1 to the set. Returns true as 1 was inserted successfully.
randomizedSet.remove(2); // Returns false as 2 does not exist in the set.
randomizedSet.insert(2); // Inserts 2 to the set, returns true. Set now contains [1,2].
randomizedSet.getRandom(); // getRandom() should return either 1 or 2 randomly.
randomizedSet.remove(1); // Removes 1 from the set, returns true. Set now contains [2].
randomizedSet.insert(2); // 2 was already in the set, so return false.
randomizedSet.getRandom(); // Since 2 is the only number in the set, getRandom() will always return 2.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">-2<sup style="user-select: auto;">31</sup> &lt;= val &lt;= 2<sup style="user-select: auto;">31</sup> - 1</code></li>
	<li style="user-select: auto;">At most <code style="user-select: auto;">2 *&nbsp;</code><code style="user-select: auto;">10<sup style="user-select: auto;">5</sup></code> calls will be made to <code style="user-select: auto;">insert</code>, <code style="user-select: auto;">remove</code>, and <code style="user-select: auto;">getRandom</code>.</li>
	<li style="user-select: auto;">There will be <strong style="user-select: auto;">at least one</strong> element in the data structure when <code style="user-select: auto;">getRandom</code> is called.</li>
</ul>
</div>