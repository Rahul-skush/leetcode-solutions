<h2><a href="https://leetcode.com/problems/design-underground-system/">1396. Design Underground System</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">An underground railway system is keeping track of customer travel times between different stations. They are using this data to calculate the average time it takes to travel from one station to another.</p>

<p style="user-select: auto;">Implement the <code style="user-select: auto;">UndergroundSystem</code> class:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">void checkIn(int id, string stationName, int t)</code>

	<ul style="user-select: auto;">
		<li style="user-select: auto;">A customer with a card ID equal to <code style="user-select: auto;">id</code>, checks in at the station <code style="user-select: auto;">stationName</code> at time <code style="user-select: auto;">t</code>.</li>
		<li style="user-select: auto;">A customer can only be checked into one place at a time.</li>
	</ul>
	</li>
	<li style="user-select: auto;"><code style="user-select: auto;">void checkOut(int id, string stationName, int t)</code>
	<ul style="user-select: auto;">
		<li style="user-select: auto;">A customer with a card ID equal to <code style="user-select: auto;">id</code>, checks out from the station <code style="user-select: auto;">stationName</code> at time <code style="user-select: auto;">t</code>.</li>
	</ul>
	</li>
	<li style="user-select: auto;"><code style="user-select: auto;">double getAverageTime(string startStation, string endStation)</code>
	<ul style="user-select: auto;">
		<li style="user-select: auto;">Returns the average time it takes to travel from <code style="user-select: auto;">startStation</code> to <code style="user-select: auto;">endStation</code>.</li>
		<li style="user-select: auto;">The average time is computed from all the previous traveling times from <code style="user-select: auto;">startStation</code> to <code style="user-select: auto;">endStation</code> that happened <strong style="user-select: auto;">directly</strong>, meaning a check in at <code style="user-select: auto;">startStation</code> followed by a check out from <code style="user-select: auto;">endStation</code>.</li>
		<li style="user-select: auto;">The time it takes to travel from <code style="user-select: auto;">startStation</code> to <code style="user-select: auto;">endStation</code> <strong style="user-select: auto;">may be different</strong> from the time it takes to travel from <code style="user-select: auto;">endStation</code> to <code style="user-select: auto;">startStation</code>.</li>
		<li style="user-select: auto;">There will be at least one customer that has traveled from <code style="user-select: auto;">startStation</code> to <code style="user-select: auto;">endStation</code> before <code style="user-select: auto;">getAverageTime</code> is called.</li>
	</ul>
	</li>
</ul>

<p style="user-select: auto;">You may assume all calls to the <code style="user-select: auto;">checkIn</code> and <code style="user-select: auto;">checkOut</code> methods are consistent. If a customer checks in at time <code style="user-select: auto;">t<sub style="user-select: auto;">1</sub></code> then checks out at time <code style="user-select: auto;">t<sub style="user-select: auto;">2</sub></code>, then <code style="user-select: auto;">t<sub style="user-select: auto;">1</sub> &lt; t<sub style="user-select: auto;">2</sub></code>. All events happen in chronological order.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input</strong>
["UndergroundSystem","checkIn","checkIn","checkIn","checkOut","checkOut","checkOut","getAverageTime","getAverageTime","checkIn","getAverageTime","checkOut","getAverageTime"]
[[],[45,"Leyton",3],[32,"Paradise",8],[27,"Leyton",10],[45,"Waterloo",15],[27,"Waterloo",20],[32,"Cambridge",22],["Paradise","Cambridge"],["Leyton","Waterloo"],[10,"Leyton",24],["Leyton","Waterloo"],[10,"Waterloo",38],["Leyton","Waterloo"]]

<strong style="user-select: auto;">Output</strong>
[null,null,null,null,null,null,null,14.00000,11.00000,null,11.00000,null,12.00000]

<strong style="user-select: auto;">Explanation</strong>
UndergroundSystem undergroundSystem = new UndergroundSystem();
undergroundSystem.checkIn(45, "Leyton", 3);
undergroundSystem.checkIn(32, "Paradise", 8);
undergroundSystem.checkIn(27, "Leyton", 10);
undergroundSystem.checkOut(45, "Waterloo", 15);  // Customer 45 "Leyton" -&gt; "Waterloo" in 15-3 = 12
undergroundSystem.checkOut(27, "Waterloo", 20);  // Customer 27 "Leyton" -&gt; "Waterloo" in 20-10 = 10
undergroundSystem.checkOut(32, "Cambridge", 22); // Customer 32 "Paradise" -&gt; "Cambridge" in 22-8 = 14
undergroundSystem.getAverageTime("Paradise", "Cambridge"); // return 14.00000. One trip "Paradise" -&gt; "Cambridge", (14) / 1 = 14
undergroundSystem.getAverageTime("Leyton", "Waterloo");    // return 11.00000. Two trips "Leyton" -&gt; "Waterloo", (10 + 12) / 2 = 11
undergroundSystem.checkIn(10, "Leyton", 24);
undergroundSystem.getAverageTime("Leyton", "Waterloo");    // return 11.00000
undergroundSystem.checkOut(10, "Waterloo", 38);  // Customer 10 "Leyton" -&gt; "Waterloo" in 38-24 = 14
undergroundSystem.getAverageTime("Leyton", "Waterloo");    // return 12.00000. Three trips "Leyton" -&gt; "Waterloo", (10 + 12 + 14) / 3 = 12
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input</strong>
["UndergroundSystem","checkIn","checkOut","getAverageTime","checkIn","checkOut","getAverageTime","checkIn","checkOut","getAverageTime"]
[[],[10,"Leyton",3],[10,"Paradise",8],["Leyton","Paradise"],[5,"Leyton",10],[5,"Paradise",16],["Leyton","Paradise"],[2,"Leyton",21],[2,"Paradise",30],["Leyton","Paradise"]]

<strong style="user-select: auto;">Output</strong>
[null,null,null,5.00000,null,null,5.50000,null,null,6.66667]

<strong style="user-select: auto;">Explanation</strong>
UndergroundSystem undergroundSystem = new UndergroundSystem();
undergroundSystem.checkIn(10, "Leyton", 3);
undergroundSystem.checkOut(10, "Paradise", 8); // Customer 10 "Leyton" -&gt; "Paradise" in 8-3 = 5
undergroundSystem.getAverageTime("Leyton", "Paradise"); // return 5.00000, (5) / 1 = 5
undergroundSystem.checkIn(5, "Leyton", 10);
undergroundSystem.checkOut(5, "Paradise", 16); // Customer 5 "Leyton" -&gt; "Paradise" in 16-10 = 6
undergroundSystem.getAverageTime("Leyton", "Paradise"); // return 5.50000, (5 + 6) / 2 = 5.5
undergroundSystem.checkIn(2, "Leyton", 21);
undergroundSystem.checkOut(2, "Paradise", 30); // Customer 2 "Leyton" -&gt; "Paradise" in 30-21 = 9
undergroundSystem.getAverageTime("Leyton", "Paradise"); // return 6.66667, (5 + 6 + 9) / 3 = 6.66667
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= id, t &lt;= 10<sup style="user-select: auto;">6</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= stationName.length, startStation.length, endStation.length &lt;= 10</code></li>
	<li style="user-select: auto;">All strings consist of uppercase and lowercase English letters and digits.</li>
	<li style="user-select: auto;">There will be at most <code style="user-select: auto;">2 * 10<sup style="user-select: auto;">4</sup></code> calls <strong style="user-select: auto;">in total</strong> to <code style="user-select: auto;">checkIn</code>, <code style="user-select: auto;">checkOut</code>, and <code style="user-select: auto;">getAverageTime</code>.</li>
	<li style="user-select: auto;">Answers within <code style="user-select: auto;">10<sup style="user-select: auto;">-5</sup></code> of the actual value will be accepted.</li>
</ul>
</div>