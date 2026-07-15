<h2><a href="https://www.geeksforgeeks.org/problems/root-to-leaf-paths-sum/1?utm_source=chatgpt.com">Root to Leaf Paths Sum</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO" style="--text-color: var(--problem-text-color);"><p><span style="font-size: 14pt;">Given the root of a binary tree where each node contains a single digit (0–9). </span></p>
<ul>
<li><span style="font-size: 14pt;">Every root-to-leaf path represents a number formed by concatenating the digits along the path. </span></li>
<li><span style="font-size: 14pt;">Starting from the root, each next digit is appended to the current number (i.e., currentNumber = currentNumber × 10 + node-&gt;data).</span></li>
<li><span style="font-size: 14pt;">Return the sum of all the numbers formed by every root-to-leaf path.</span></li>
</ul>
<p><strong><span style="font-size: 18px;">Examples:</span></strong></p>
<pre><span style="font-size: 18px;"><strong>Input:      </strong>
<img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/700454/Web/Other/blobid0_1730705508.png" width="273" height="244"></span>
<span style="font-size: 18px;"><strong>Output:</strong> 13997</span>
<span style="font-size: 18px;"><strong>Explanation : </strong>There are 4 leaves, resulting in leaf path of 632, 6357, 6354, 654 sums to 13997.</span></pre>
<pre><span style="font-size: 18px;"><strong>Input:    </strong>
<img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/700454/Web/Other/blobid1_1730705776.png" width="261" height="231"></span>
<span style="font-size: 18px;"><strong>Output:</strong> 2630</span>
<span style="font-size: 18px;"><strong>Explanation: </strong>There are 3 leaves, resulting in leaf path of 1240, 1260, 130 sums to 2630.<br></span></pre>
<pre><span style="font-size: 18px;"><strong>Input:    </strong>
           1<br>          /<br>         2                    </span>
<span style="font-size: 18px;"><strong>Output:</strong> 12</span>
<span style="font-size: 18px;"><strong>Explanation: </strong>There is 1 leaf, resulting in leaf path of 12.</span></pre>
<p><span style="font-size: 18px;"></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<code>OYO Rooms</code>&nbsp;<code>Google</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Tree</code>&nbsp;<code>Data Structures</code>&nbsp;