<h2><a href="https://leetcode.com/problems/design-hashmap/">706. Design HashMap</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Design a HashMap without using any built-in hash table libraries.</p>

<p style="user-select: auto;">Implement the <code style="user-select: auto;">MyHashMap</code> class:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">MyHashMap()</code> initializes the object with an empty map.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">void put(int key, int value)</code> inserts a <code style="user-select: auto;">(key, value)</code> pair into the HashMap. If the <code style="user-select: auto;">key</code> already exists in the map, update the corresponding <code style="user-select: auto;">value</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">int get(int key)</code> returns the <code style="user-select: auto;">value</code> to which the specified <code style="user-select: auto;">key</code> is mapped, or <code style="user-select: auto;">-1</code> if this map contains no mapping for the <code style="user-select: auto;">key</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">void remove(key)</code> removes the <code style="user-select: auto;">key</code> and its corresponding <code style="user-select: auto;">value</code> if the map contains the mapping for the <code style="user-select: auto;">key</code>.</li>
</ul>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input</strong>
["MyHashMap", "put", "put", "get", "get", "put", "get", "remove", "get"]
[[], [1, 1], [2, 2], [1], [3], [2, 1], [2], [2], [2]]
<strong style="user-select: auto;">Output</strong>
[null, null, null, 1, -1, null, 1, null, -1]

<strong style="user-select: auto;">Explanation</strong>
MyHashMap myHashMap = new MyHashMap();
myHashMap.put(1, 1); // The map is now [[1,1]]
myHashMap.put(2, 2); // The map is now [[1,1], [2,2]]
myHashMap.get(1);    // return 1, The map is now [[1,1], [2,2]]
myHashMap.get(3);    // return -1 (i.e., not found), The map is now [[1,1], [2,2]]
myHashMap.put(2, 1); // The map is now [[1,1], [2,1]] (i.e., update the existing value)
myHashMap.get(2);    // return 1, The map is now [[1,1], [2,1]]
myHashMap.remove(2); // remove the mapping for 2, The map is now [[1,1]]
myHashMap.get(2);    // return -1 (i.e., not found), The map is now [[1,1]]
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= key, value &lt;= 10<sup style="user-select: auto;">6</sup></code></li>
	<li style="user-select: auto;">At most <code style="user-select: auto;">10<sup style="user-select: auto;">4</sup></code> calls will be made to <code style="user-select: auto;">put</code>, <code style="user-select: auto;">get</code>, and <code style="user-select: auto;">remove</code>.</li>
</ul>
</div>