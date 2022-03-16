<h2><a href="https://leetcode.com/problems/heaters/">475. Heaters</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Winter is coming! During the contest, your first job is to design a standard heater with a fixed warm radius to warm all the houses.</p>

<p style="user-select: auto;">Every house can be warmed, as long as the house is within the heater's warm radius range.&nbsp;</p>

<p style="user-select: auto;">Given the positions of <code style="user-select: auto;">houses</code> and <code style="user-select: auto;">heaters</code> on a horizontal line, return <em style="user-select: auto;">the minimum radius standard of heaters&nbsp;so that those heaters could cover all houses.</em></p>

<p style="user-select: auto;"><strong style="user-select: auto;">Notice</strong> that&nbsp;all the <code style="user-select: auto;">heaters</code> follow your radius standard, and the warm radius will the same.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> houses = [1,2,3], heaters = [2]
<strong style="user-select: auto;">Output:</strong> 1
<strong style="user-select: auto;">Explanation:</strong> The only heater was placed in the position 2, and if we use the radius 1 standard, then all the houses can be warmed.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> houses = [1,2,3,4], heaters = [1,4]
<strong style="user-select: auto;">Output:</strong> 1
<strong style="user-select: auto;">Explanation:</strong> The two heater was placed in the position 1 and 4. We need to use radius 1 standard, then all the houses can be warmed.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> houses = [1,5], heaters = [2]
<strong style="user-select: auto;">Output:</strong> 3
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= houses.length, heaters.length &lt;= 3 * 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= houses[i], heaters[i] &lt;= 10<sup style="user-select: auto;">9</sup></code></li>
</ul>
</div>