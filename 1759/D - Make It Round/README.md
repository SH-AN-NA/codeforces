<h2><a href="https://codeforces.com/contest/1759/problem/D" target="_blank" rel="noopener noreferrer">1759D — Make It Round</a></h2>

| | |
|---|---|
| **Difficulty** | 1400 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1759D](https://codeforces.com/contest/1759/problem/D) |

## Topics
`brute force` `number theory`

---

## Problem Statement

<div class="header"><div class="title">D. Make It Round</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Inflation has occurred in Berlandia, so the store needs to change the price of goods.</p><p>The current price of good $$$n$$$ is given. It is allowed to increase the price of the good by $$$k$$$ times, with $$$1 \le k \le m$$$, k is an integer. Output the roundest possible new price of the good. That is, the one that has the maximum number of zeros at the end.</p><p>For example, the number <span class="tex-font-style-tt">481000</span> is more round than the number <span class="tex-font-style-tt">1000010</span> (three zeros at the end of <span class="tex-font-style-tt">481000</span> and only one at the end of <span class="tex-font-style-tt">1000010</span>).</p><p>If there are several possible variants, output the one in which the new price is maximal.</p><p>If it is impossible to get a rounder price, output $$$n \cdot m$$$ (that is, the maximum possible price).</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \le t \le 10^4$$$) —the number of test cases in the test.</p><p>Each test case consists of one line.</p><p>This line contains two integers: $$$n$$$ and $$$m$$$ ($$$1 \le n, m \le 10^9$$$). Where $$$n$$$ is the old price of the good, and the number $$$m$$$ means that you can increase the price $$$n$$$ no more than $$$m$$$ times.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output on a separate line the roundest integer of the form $$$n \cdot k$$$ ($$$1 \le k \le m$$$, $$$k$$$ — an integer).</p><p>If there are several possible variants, output the one in which the new price (value $$$n \cdot k$$$) is maximal.</p><p>If it is impossible to get a more rounded price, output $$$n \cdot m$$$ (that is, the maximum possible price).</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0023814167427577027" id="id002443545316191319" class="input-output-copier">Copy</div></div><pre id="id0023814167427577027"><div class="test-example-line test-example-line-even test-example-line-0">10</div><div class="test-example-line test-example-line-odd test-example-line-1">6 11</div><div class="test-example-line test-example-line-even test-example-line-2">5 43</div><div class="test-example-line test-example-line-odd test-example-line-3">13 5</div><div class="test-example-line test-example-line-even test-example-line-4">4 16</div><div class="test-example-line test-example-line-odd test-example-line-5">10050 12345</div><div class="test-example-line test-example-line-even test-example-line-6">2 6</div><div class="test-example-line test-example-line-odd test-example-line-7">4 30</div><div class="test-example-line test-example-line-even test-example-line-8">25 10</div><div class="test-example-line test-example-line-odd test-example-line-9">2 81</div><div class="test-example-line test-example-line-even test-example-line-10">1 7</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id002935257174711573" id="id004281905401432421" class="input-output-copier">Copy</div></div><pre id="id002935257174711573">60
200
65
60
120600000
10
100
200
100
7
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first case $$$n = 6$$$, $$$m = 11$$$. We cannot get a number with two zeros or more at the end, because we need to increase the price $$$50$$$ times, but $$$50  \gt  m = 11$$$. The maximum price multiple of $$$10$$$ would be $$$6 \cdot 10 = 60$$$.</p><p>In the second case $$$n = 5$$$, $$$m = 43$$$. The maximum price multiple of $$$100$$$ would be $$$5 \cdot 40 = 200$$$.</p><p>In the third case, $$$n = 13$$$, $$$m = 5$$$. All possible new prices will not end in $$$0$$$, then you should output $$$n \cdot m = 65$$$.</p><p>In the fourth case, you should increase the price $$$15$$$ times.</p><p>In the fifth case, increase the price $$$12000$$$ times.</p></div>