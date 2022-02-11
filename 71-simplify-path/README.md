<h2><a href="https://leetcode.com/problems/simplify-path/">71. Simplify Path</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given a string <code style="user-select: auto;">path</code>, which is an <strong style="user-select: auto;">absolute path</strong> (starting with a slash <code style="user-select: auto;">'/'</code>) to a file or directory in a Unix-style file system, convert it to the simplified <strong style="user-select: auto;">canonical path</strong>.</p>

<p style="user-select: auto;">In a Unix-style file system, a period <code style="user-select: auto;">'.'</code> refers to the current directory, a double period <code style="user-select: auto;">'..'</code> refers to the directory up a level, and any multiple consecutive slashes (i.e. <code style="user-select: auto;">'//'</code>) are treated as a single slash <code style="user-select: auto;">'/'</code>. For this problem, any other format of periods such as <code style="user-select: auto;">'...'</code> are treated as file/directory names.</p>

<p style="user-select: auto;">The <strong style="user-select: auto;">canonical path</strong> should have the following format:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">The path starts with a single slash <code style="user-select: auto;">'/'</code>.</li>
	<li style="user-select: auto;">Any two directories are separated by a single slash <code style="user-select: auto;">'/'</code>.</li>
	<li style="user-select: auto;">The path does not end with a trailing <code style="user-select: auto;">'/'</code>.</li>
	<li style="user-select: auto;">The path only contains the directories on the path from the root directory to the target file or directory (i.e., no period <code style="user-select: auto;">'.'</code> or double period <code style="user-select: auto;">'..'</code>)</li>
</ul>

<p style="user-select: auto;">Return <em style="user-select: auto;">the simplified <strong style="user-select: auto;">canonical path</strong></em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> path = "/home/"
<strong style="user-select: auto;">Output:</strong> "/home"
<strong style="user-select: auto;">Explanation:</strong> Note that there is no trailing slash after the last directory name.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> path = "/../"
<strong style="user-select: auto;">Output:</strong> "/"
<strong style="user-select: auto;">Explanation:</strong> Going one level up from the root directory is a no-op, as the root level is the highest level you can go.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> path = "/home//foo/"
<strong style="user-select: auto;">Output:</strong> "/home/foo"
<strong style="user-select: auto;">Explanation:</strong> In the canonical path, multiple consecutive slashes are replaced by a single one.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= path.length &lt;= 3000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">path</code> consists of English letters, digits, period <code style="user-select: auto;">'.'</code>, slash <code style="user-select: auto;">'/'</code> or <code style="user-select: auto;">'_'</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">path</code> is a valid absolute Unix path.</li>
</ul>
</div>