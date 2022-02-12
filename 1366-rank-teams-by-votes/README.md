<h2><a href="https://leetcode.com/problems/rank-teams-by-votes/">1366. Rank Teams by Votes</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">In a special ranking system, each voter gives a rank from highest to lowest to all teams participated in the competition.</p>

<p style="user-select: auto;">The ordering of teams is decided by who received the most position-one votes. If two or more teams tie in the first position, we consider the second position to resolve the conflict, if they tie again, we continue this process until the ties are resolved. If two or more teams are still tied after considering all positions, we rank them alphabetically based on their team letter.</p>

<p style="user-select: auto;">Given an array of strings <code style="user-select: auto;">votes</code> which is the votes of all voters in the ranking systems. Sort all teams according to the ranking system described above.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">a string of all teams</em> <strong style="user-select: auto;">sorted</strong> by the ranking system.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> votes = ["ABC","ACB","ABC","ACB","ACB"]
<strong style="user-select: auto;">Output:</strong> "ACB"
<strong style="user-select: auto;">Explanation:</strong> Team A was ranked first place by 5 voters. No other team was voted as first place so team A is the first team.
Team B was ranked second by 2 voters and was ranked third by 3 voters.
Team C was ranked second by 3 voters and was ranked third by 2 voters.
As most of the voters ranked C second, team C is the second team and team B is the third.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> votes = ["WXYZ","XYZW"]
<strong style="user-select: auto;">Output:</strong> "XWYZ"
<strong style="user-select: auto;">Explanation:</strong> X is the winner due to tie-breaking rule. X has same votes as W for the first position but X has one vote as second position while W doesn't have any votes as second position. 
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> votes = ["ZMNAGUEDSJYLBOPHRQICWFXTVK"]
<strong style="user-select: auto;">Output:</strong> "ZMNAGUEDSJYLBOPHRQICWFXTVK"
<strong style="user-select: auto;">Explanation:</strong> Only one voter so his votes are used for the ranking.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= votes.length &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= votes[i].length &lt;= 26</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">votes[i].length == votes[j].length</code> for <code style="user-select: auto;">0 &lt;= i, j &lt; votes.length</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">votes[i][j]</code> is an English <strong style="user-select: auto;">uppercase</strong> letter.</li>
	<li style="user-select: auto;">All characters of <code style="user-select: auto;">votes[i]</code> are unique.</li>
	<li style="user-select: auto;">All the characters that occur in <code style="user-select: auto;">votes[0]</code> <strong style="user-select: auto;">also occur</strong> in <code style="user-select: auto;">votes[j]</code> where <code style="user-select: auto;">1 &lt;= j &lt; votes.length</code>.</li>
</ul>
</div>