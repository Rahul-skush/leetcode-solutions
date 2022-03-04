<h2><a href="https://leetcode.com/problems/champagne-tower/">799. Champagne Tower</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">We stack glasses in a pyramid, where the <strong style="user-select: auto;">first</strong> row has <code style="user-select: auto;">1</code> glass, the <strong style="user-select: auto;">second</strong> row has <code style="user-select: auto;">2</code> glasses, and so on until the 100<sup style="user-select: auto;">th</sup> row.&nbsp; Each glass holds one cup&nbsp;of champagne.</p>

<p style="user-select: auto;">Then, some champagne is poured into the first glass at the top.&nbsp; When the topmost glass is full, any excess liquid poured will fall equally to the glass immediately to the left and right of it.&nbsp; When those glasses become full, any excess champagne will fall equally to the left and right of those glasses, and so on.&nbsp; (A glass at the bottom row has its excess champagne fall on the floor.)</p>

<p style="user-select: auto;">For example, after one cup of champagne is poured, the top most glass is full.&nbsp; After two cups of champagne are poured, the two glasses on the second row are half full.&nbsp; After three cups of champagne are poured, those two cups become full - there are 3 full glasses total now.&nbsp; After four cups of champagne are poured, the third row has the middle glass half full, and the two outside glasses are a quarter full, as pictured below.</p>

<p style="user-select: auto;"><img alt="" src="https://s3-lc-upload.s3.amazonaws.com/uploads/2018/03/09/tower.png" style="height: 241px; width: 350px; user-select: auto;"></p>

<p style="user-select: auto;">Now after pouring some non-negative integer cups of champagne, return how full the <code style="user-select: auto;">j<sup style="user-select: auto;">th</sup></code> glass in the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> row is (both <code style="user-select: auto;">i</code> and <code style="user-select: auto;">j</code> are 0-indexed.)</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> poured = 1, query_row = 1, query_glass = 1
<strong style="user-select: auto;">Output:</strong> 0.00000
<strong style="user-select: auto;">Explanation:</strong> We poured 1 cup of champange to the top glass of the tower (which is indexed as (0, 0)). There will be no excess liquid so all the glasses under the top glass will remain empty.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> poured = 2, query_row = 1, query_glass = 1
<strong style="user-select: auto;">Output:</strong> 0.50000
<strong style="user-select: auto;">Explanation:</strong> We poured 2 cups of champange to the top glass of the tower (which is indexed as (0, 0)). There is one cup of excess liquid. The glass indexed as (1, 0) and the glass indexed as (1, 1) will share the excess liquid equally, and each will get half cup of champange.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> poured = 100000009, query_row = 33, query_glass = 17
<strong style="user-select: auto;">Output:</strong> 1.00000
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;=&nbsp;poured &lt;= 10<sup style="user-select: auto;">9</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= query_glass &lt;= query_row&nbsp;&lt; 100</code></li>
</ul></div>