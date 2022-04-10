<h2><a href="https://leetcode.com/problems/baseball-game/">682. Baseball Game</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are keeping score for a baseball game with strange rules. The game consists of several rounds, where the scores of past rounds may affect future rounds' scores.</p>

<p style="user-select: auto;">At the beginning of the game, you start with an empty record. You are given a list of strings <code style="user-select: auto;">ops</code>, where <code style="user-select: auto;">ops[i]</code> is the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> operation you must apply to the record and is one of the following:</p>

<ol style="user-select: auto;">
	<li style="user-select: auto;">An integer <code style="user-select: auto;">x</code> - Record a new score of <code style="user-select: auto;">x</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">"+"</code> - Record a new score that is the sum of the previous two scores. It is guaranteed there will always be two previous scores.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">"D"</code> - Record a new score that is double the previous score. It is guaranteed there will always be a previous score.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">"C"</code> - Invalidate the previous score, removing it from the record. It is guaranteed there will always be a previous score.</li>
</ol>

<p style="user-select: auto;">Return <em style="user-select: auto;">the sum of all the scores on the record</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> ops = ["5","2","C","D","+"]
<strong style="user-select: auto;">Output:</strong> 30
<strong style="user-select: auto;">Explanation:</strong>
"5" - Add 5 to the record, record is now [5].
"2" - Add 2 to the record, record is now [5, 2].
"C" - Invalidate and remove the previous score, record is now [5].
"D" - Add 2 * 5 = 10 to the record, record is now [5, 10].
"+" - Add 5 + 10 = 15 to the record, record is now [5, 10, 15].
The total sum is 5 + 10 + 15 = 30.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> ops = ["5","-2","4","C","D","9","+","+"]
<strong style="user-select: auto;">Output:</strong> 27
<strong style="user-select: auto;">Explanation:</strong>
"5" - Add 5 to the record, record is now [5].
"-2" - Add -2 to the record, record is now [5, -2].
"4" - Add 4 to the record, record is now [5, -2, 4].
"C" - Invalidate and remove the previous score, record is now [5, -2].
"D" - Add 2 * -2 = -4 to the record, record is now [5, -2, -4].
"9" - Add 9 to the record, record is now [5, -2, -4, 9].
"+" - Add -4 + 9 = 5 to the record, record is now [5, -2, -4, 9, 5].
"+" - Add 9 + 5 = 14 to the record, record is now [5, -2, -4, 9, 5, 14].
The total sum is 5 + -2 + -4 + 9 + 5 + 14 = 27.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> ops = ["1"]
<strong style="user-select: auto;">Output:</strong> 1
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= ops.length &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">ops[i]</code> is <code style="user-select: auto;">"C"</code>, <code style="user-select: auto;">"D"</code>, <code style="user-select: auto;">"+"</code>, or a string representing an integer in the range <code style="user-select: auto;">[-3 * 10<sup style="user-select: auto;">4</sup>, 3 * 10<sup style="user-select: auto;">4</sup>]</code>.</li>
	<li style="user-select: auto;">For operation <code style="user-select: auto;">"+"</code>, there will always be at least two previous scores on the record.</li>
	<li style="user-select: auto;">For operations <code style="user-select: auto;">"C"</code> and <code style="user-select: auto;">"D"</code>, there will always be at least one previous score on the record.</li>
</ul>
</div>