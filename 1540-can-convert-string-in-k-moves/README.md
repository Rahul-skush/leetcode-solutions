<h2><a href="https://leetcode.com/problems/can-convert-string-in-k-moves/">1540. Can Convert String in K Moves</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given two strings&nbsp;<code style="user-select: auto;">s</code>&nbsp;and&nbsp;<code style="user-select: auto;">t</code>, your goal is to convert&nbsp;<code style="user-select: auto;">s</code>&nbsp;into&nbsp;<code style="user-select: auto;">t</code>&nbsp;in&nbsp;<code style="user-select: auto;">k</code><strong style="user-select: auto;">&nbsp;</strong>moves or less.</p>

<p style="user-select: auto;">During the&nbsp;<code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code>&nbsp;(<font face="monospace" style="user-select: auto;"><code style="user-select: auto;">1 &lt;= i &lt;= k</code>)&nbsp;</font>move you can:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">Choose any index&nbsp;<code style="user-select: auto;">j</code>&nbsp;(1-indexed) from&nbsp;<code style="user-select: auto;">s</code>, such that&nbsp;<code style="user-select: auto;">1 &lt;= j &lt;= s.length</code>&nbsp;and <code style="user-select: auto;">j</code>&nbsp;has not been chosen in any previous move,&nbsp;and shift the character at that index&nbsp;<code style="user-select: auto;">i</code>&nbsp;times.</li>
	<li style="user-select: auto;">Do nothing.</li>
</ul>

<p style="user-select: auto;">Shifting a character means replacing it by the next letter in the alphabet&nbsp;(wrapping around so that&nbsp;<code style="user-select: auto;">'z'</code>&nbsp;becomes&nbsp;<code style="user-select: auto;">'a'</code>). Shifting a character by&nbsp;<code style="user-select: auto;">i</code>&nbsp;means applying the shift operations&nbsp;<code style="user-select: auto;">i</code>&nbsp;times.</p>

<p style="user-select: auto;">Remember that any index&nbsp;<code style="user-select: auto;">j</code>&nbsp;can be picked at most once.</p>

<p style="user-select: auto;">Return&nbsp;<code style="user-select: auto;">true</code>&nbsp;if it's possible to convert&nbsp;<code style="user-select: auto;">s</code>&nbsp;into&nbsp;<code style="user-select: auto;">t</code>&nbsp;in no more than&nbsp;<code style="user-select: auto;">k</code>&nbsp;moves, otherwise return&nbsp;<code style="user-select: auto;">false</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "input", t = "ouput", k = 9
<strong style="user-select: auto;">Output:</strong> true
<b style="user-select: auto;">Explanation: </b>In the 6th move, we shift 'i' 6 times to get 'o'. And in the 7th move we shift 'n' to get 'u'.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "abc", t = "bcd", k = 10
<strong style="user-select: auto;">Output:</strong> false
<strong style="user-select: auto;">Explanation: </strong>We need to shift each character in s one time to convert it into t. We can shift 'a' to 'b' during the 1st move. However, there is no way to shift the other characters in the remaining moves to obtain t from s.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "aab", t = "bbb", k = 27
<strong style="user-select: auto;">Output:</strong> true
<b style="user-select: auto;">Explanation: </b>In the 1st move, we shift the first 'a' 1 time to get 'b'. In the 27th move, we shift the second 'a' 27 times to get 'b'.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= s.length, t.length &lt;= 10^5</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= k &lt;= 10^9</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">s</code>, <code style="user-select: auto;">t</code> contain&nbsp;only lowercase English letters.</li>
</ul>
</div>