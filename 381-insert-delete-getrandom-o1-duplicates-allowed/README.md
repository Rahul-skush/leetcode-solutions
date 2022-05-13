<h2><a href="https://leetcode.com/problems/insert-delete-getrandom-o1-duplicates-allowed/">381. Insert Delete GetRandom O(1) - Duplicates allowed</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;"><code style="user-select: auto;">RandomizedCollection</code> is a data structure that contains a collection of numbers, possibly duplicates (i.e., a multiset). It should support inserting and removing specific elements and also removing a random element.</p>

<p style="user-select: auto;">Implement the <code style="user-select: auto;">RandomizedCollection</code> class:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">RandomizedCollection()</code> Initializes the empty <code style="user-select: auto;">RandomizedCollection</code> object.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">bool insert(int val)</code> Inserts an item <code style="user-select: auto;">val</code> into the multiset, even if the item is already present. Returns <code style="user-select: auto;">true</code> if the item is not present, <code style="user-select: auto;">false</code> otherwise.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">bool remove(int val)</code> Removes an item <code style="user-select: auto;">val</code> from the multiset if present. Returns <code style="user-select: auto;">true</code> if the item is present, <code style="user-select: auto;">false</code> otherwise. Note that if <code style="user-select: auto;">val</code> has multiple occurrences in the multiset, we only remove one of them.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">int getRandom()</code> Returns a random element from the current multiset of elements. The probability of each element being returned is <strong style="user-select: auto;">linearly related</strong> to the number of same values the multiset contains.</li>
</ul>

<p style="user-select: auto;">You must implement the functions of the class such that each function works on <strong style="user-select: auto;">average</strong> <code style="user-select: auto;">O(1)</code> time complexity.</p>

<p style="user-select: auto;"><strong style="user-select: auto;">Note:</strong> The test cases are generated such that <code style="user-select: auto;">getRandom</code> will only be called if there is <strong style="user-select: auto;">at least one</strong> item in the <code style="user-select: auto;">RandomizedCollection</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input</strong>
["RandomizedCollection", "insert", "insert", "insert", "getRandom", "remove", "getRandom"]
[[], [1], [1], [2], [], [1], []]
<strong style="user-select: auto;">Output</strong>
[null, true, false, true, 2, true, 1]

<strong style="user-select: auto;">Explanation</strong>
RandomizedCollection randomizedCollection = new RandomizedCollection();
randomizedCollection.insert(1);   // return true since the collection does not contain 1.
                                  // Inserts 1 into the collection.
randomizedCollection.insert(1);   // return false since the collection contains 1.
                                  // Inserts another 1 into the collection. Collection now contains [1,1].
randomizedCollection.insert(2);   // return true since the collection does not contain 2.
                                  // Inserts 2 into the collection. Collection now contains [1,1,2].
randomizedCollection.getRandom(); // getRandom should:
                                  // - return 1 with probability 2/3, or
                                  // - return 2 with probability 1/3.
randomizedCollection.remove(1);   // return true since the collection contains 1.
                                  // Removes 1 from the collection. Collection now contains [1,2].
randomizedCollection.getRandom(); // getRandom should return 1 or 2, both equally likely.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">-2<sup style="user-select: auto;">31</sup> &lt;= val &lt;= 2<sup style="user-select: auto;">31</sup> - 1</code></li>
	<li style="user-select: auto;">At most <code style="user-select: auto;">2 * 10<sup style="user-select: auto;">5</sup></code> calls <strong style="user-select: auto;">in total</strong> will be made to <code style="user-select: auto;">insert</code>, <code style="user-select: auto;">remove</code>, and <code style="user-select: auto;">getRandom</code>.</li>
	<li style="user-select: auto;">There will be <strong style="user-select: auto;">at least one</strong> element in the data structure when <code style="user-select: auto;">getRandom</code> is called.</li>
</ul>
</div>