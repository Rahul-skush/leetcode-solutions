<h2><a href="https://leetcode.com/problems/count-sorted-vowel-strings/">1641. Count Sorted Vowel Strings</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given an integer <code style="user-select: auto;">n</code>, return <em style="user-select: auto;">the number of strings of length </em><code style="user-select: auto;">n</code><em style="user-select: auto;"> that consist only of vowels (</em><code style="user-select: auto;">a</code><em style="user-select: auto;">, </em><code style="user-select: auto;">e</code><em style="user-select: auto;">, </em><code style="user-select: auto;">i</code><em style="user-select: auto;">, </em><code style="user-select: auto;">o</code><em style="user-select: auto;">, </em><code style="user-select: auto;">u</code><em style="user-select: auto;">) and are <strong style="user-select: auto;">lexicographically sorted</strong>.</em></p>

<p style="user-select: auto;">A string <code style="user-select: auto;">s</code> is <strong style="user-select: auto;">lexicographically sorted</strong> if for all valid <code style="user-select: auto;">i</code>, <code style="user-select: auto;">s[i]</code> is the same as or comes before <code style="user-select: auto;">s[i+1]</code> in the alphabet.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 1
<strong style="user-select: auto;">Output:</strong> 5
<strong style="user-select: auto;">Explanation:</strong> The 5 sorted strings that consist of vowels only are <code style="user-select: auto;">["a","e","i","o","u"].</code>
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 2
<strong style="user-select: auto;">Output:</strong> 15
<strong style="user-select: auto;">Explanation:</strong> The 15 sorted strings that consist of vowels only are
["aa","ae","ai","ao","au","ee","ei","eo","eu","ii","io","iu","oo","ou","uu"].
Note that "ea" is not a valid string since 'e' comes after 'a' in the alphabet.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> n = 33
<strong style="user-select: auto;">Output:</strong> 66045
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n &lt;= 50</code>&nbsp;</li>
</ul>
</div>