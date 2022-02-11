<h2><a href="https://leetcode.com/problems/count-and-say/">38. Count and Say</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">The <strong style="user-select: auto;">count-and-say</strong> sequence is a sequence of digit strings defined by the recursive formula:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">countAndSay(1) = "1"</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">countAndSay(n)</code> is the way you would "say" the digit string from <code style="user-select: auto;">countAndSay(n-1)</code>, which is then converted into a different digit string.</li>
</ul>

<p style="user-select: auto;">To determine how you "say" a digit string, split it into the <strong style="user-select: auto;">minimal</strong> number of groups so that each group is a contiguous section all of the <strong style="user-select: auto;">same character.</strong> Then for each group, say the number of characters, then say the character. To convert the saying into a digit string, replace the counts with a number and concatenate every saying.</p>

<p style="user-select: auto;">For example, the saying and conversion for digit string <code style="user-select: auto;">"3322251"</code>:</p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/10/23/countandsay.jpg" style="width: 581px; height: 172px; user-select: auto;">
<p style="user-select: auto;">Given a positive integer <code style="user-select: auto;">n</code>, return <em style="user-select: auto;">the </em><code style="user-select: auto;">n<sup style="user-select: auto;">th</sup></code><em style="user-select: auto;"> term of the <strong style="user-select: auto;">count-and-say</strong> sequence</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 1
<strong style="user-select: auto;">Output:</strong> "1"
<strong style="user-select: auto;">Explanation:</strong> This is the base case.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 4
<strong style="user-select: auto;">Output:</strong> "1211"
<strong style="user-select: auto;">Explanation:</strong>
countAndSay(1) = "1"
countAndSay(2) = say "1" = one 1 = "11"
countAndSay(3) = say "11" = two 1's = "21"
countAndSay(4) = say "21" = one 2 + one 1 = "12" + "11" = "1211"
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n &lt;= 30</code></li>
</ul>
</div>