<h2><a href="https://codeforces.com/contest/1337/problem/A" target="_blank" rel="noopener noreferrer">1337A — Ichihime and Triangle</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1337A](https://codeforces.com/contest/1337/problem/A) |

## Topics
`constructive algorithms` `math`

---

## Problem Statement

<div class="header"><div class="title">A. Ichihime and Triangle</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Ichihime is the current priestess of the Mahjong Soul Temple. She claims to be human, despite her cat ears.</p><p>These days the temple is holding a math contest. Usually, Ichihime lacks interest in these things, but this time the prize for the winner is her favorite — cookies. Ichihime decides to attend the contest. Now she is solving the following problem.</p><center><img class="tex-graphics" src="https://espresso.codeforces.com/460965cc95e110488641a549ff72e6b554689699.webp" style="max-width: 100.0%;max-height: 100.0%;"></center> <p>You are given four positive integers $$$a$$$, $$$b$$$, $$$c$$$, $$$d$$$, such that $$$a \leq b \leq c \leq d$$$. </p><p>Your task is to find three integers $$$x$$$, $$$y$$$, $$$z$$$, satisfying the following conditions:</p><ul><li> $$$a \leq x \leq b$$$.</li><li> $$$b \leq y \leq c$$$.</li><li> $$$c \leq z \leq d$$$.</li><li> There exists a triangle with a positive non-zero area and the lengths of its three sides are $$$x$$$, $$$y$$$, and $$$z$$$.</li></ul><p>Ichihime desires to get the cookie, but the problem seems too hard for her. Can you help her?</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \leq t \leq 1000$$$)  — the number of test cases.</p><p>The next $$$t$$$ lines describe test cases. Each test case is given as four space-separated integers $$$a$$$, $$$b$$$, $$$c$$$, $$$d$$$ ($$$1 \leq a \leq b \leq c \leq d \leq 10^9$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print three integers $$$x$$$, $$$y$$$, $$$z$$$  — the integers you found satisfying the conditions given in the statement.</p><p>It is guaranteed that the answer always exists. If there are multiple answers, print any.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id008749103778820277" id="id0003876324038752199" class="input-output-copier">Copy</div></div><pre id="id008749103778820277">4
1 3 5 7
1 5 5 7
100000 200000 300000 400000
1 1 977539810 977539810
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id009840366480031656" id="id0031586954395214595" class="input-output-copier">Copy</div></div><pre id="id009840366480031656">3 4 5
5 5 5
182690 214748 300999
1 977539810 977539810
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>One of the possible solutions to the first test case:</p><p><img class="tex-graphics" src="https://espresso.codeforces.com/21cfbbf175bf3960b8919891ab8a62a0fc8344f3.png" style="max-width: 100.0%;max-height: 100.0%;"></p><p>One of the possible solutions to the second test case:</p><p><img class="tex-graphics" src="https://espresso.codeforces.com/0e86e95a0789a5557b2b155cd1295fd1f5e61bac.png" style="max-width: 100.0%;max-height: 100.0%;"></p></div>