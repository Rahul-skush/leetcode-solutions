<h2><a href="https://leetcode.com/problems/encode-and-decode-tinyurl/">535. Encode and Decode TinyURL</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><blockquote style="user-select: auto;">Note: This is a companion problem to the <a href="https://leetcode.com/discuss/interview-question/system-design/" target="_blank" style="user-select: auto;">System Design</a> problem: <a href="https://leetcode.com/discuss/interview-question/124658/Design-a-URL-Shortener-(-TinyURL-)-System/" target="_blank" style="user-select: auto;">Design TinyURL</a>.</blockquote>

<p style="user-select: auto;">TinyURL is a URL shortening service where you enter a URL such as <code style="user-select: auto;">https://leetcode.com/problems/design-tinyurl</code> and it returns a short URL such as <code style="user-select: auto;">http://tinyurl.com/4e9iAk</code>. Design a class to encode a URL and decode a tiny URL.</p>

<p style="user-select: auto;">There is no restriction on how your encode/decode algorithm should work. You just need to ensure that a URL can be encoded to a tiny URL and the tiny URL can be decoded to the original URL.</p>

<p style="user-select: auto;">Implement the <code style="user-select: auto;">Solution</code> class:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">Solution()</code> Initializes the object of the system.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">String encode(String longUrl)</code> Returns a tiny URL for the given <code style="user-select: auto;">longUrl</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">String decode(String shortUrl)</code> Returns the original long URL for the given <code style="user-select: auto;">shortUrl</code>. It is guaranteed that the given <code style="user-select: auto;">shortUrl</code> was encoded by the same object.</li>
</ul>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> url = "https://leetcode.com/problems/design-tinyurl"
<strong style="user-select: auto;">Output:</strong> "https://leetcode.com/problems/design-tinyurl"

<strong style="user-select: auto;">Explanation:</strong>
Solution obj = new Solution();
string tiny = obj.encode(url); // returns the encoded tiny url.
string ans = obj.decode(tiny); // returns the original url after deconding it.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= url.length &lt;= 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">url</code> is guranteed to be a valid URL.</li>
</ul>
</div>