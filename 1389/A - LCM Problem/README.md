<h2><a href="https://codeforces.com/contest/1389/problem/A" target="_blank" rel="noopener noreferrer">1389A — LCM Problem</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1389A](https://codeforces.com/contest/1389/problem/A) |

## Topics
`constructive algorithms` `greedy` `math` `number theory`

---

## Problem Statement

<div class="header"><div class="title">A. LCM Problem</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Let $$$LCM(x, y)$$$ be the minimum positive integer that is divisible by both $$$x$$$ and $$$y$$$. For example, $$$LCM(13, 37) = 481$$$, $$$LCM(9, 6) = 18$$$.</p><p>You are given two integers $$$l$$$ and $$$r$$$. Find two integers $$$x$$$ and $$$y$$$ such that $$$l \le x  \lt  y \le r$$$ and $$$l \le LCM(x, y) \le r$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains one integer $$$t$$$ ($$$1 \le t \le 10000$$$) — the number of test cases.</p><p>Each test case is represented by one line containing two integers $$$l$$$ and $$$r$$$ ($$$1 \le l  \lt  r \le 10^9$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print two integers:</p><ul> <li> if it is impossible to find integers $$$x$$$ and $$$y$$$ meeting the constraints in the statement, print two integers equal to $$$-1$$$; </li><li> otherwise, print the values of $$$x$$$ and $$$y$$$ (if there are multiple valid answers, you may print any of them). </li></ul></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0009350627782407173" id="id00804899731977933" class="input-output-copier">Copy</div></div><pre id="id0009350627782407173">4
1 1337
13 69
2 4
88 89
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00826058567912467" id="id0041660648474062645" class="input-output-copier">Copy</div></div><pre id="id00826058567912467">6 7
14 21
2 4
-1 -1
</pre></div></div></div>