<h2><a href="https://codeforces.com/contest/2050/problem/C" target="_blank" rel="noopener noreferrer">2050C — Uninteresting Number</a></h2>

| | |
|---|---|
| **Difficulty** | 1200 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2050C](https://codeforces.com/contest/2050/problem/C) |

## Topics
`brute force` `dp` `math`

---

## Problem Statement

<div class="header"><div class="title">C. Uninteresting Number</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given a number $$$n$$$ with a length of no more than $$$10^5$$$.</p><p>You can perform the following operation any number of times: choose one of its digits, square it, and replace the original digit with the result. The result must be a digit (that is, if you choose the digit $$$x$$$, then the value of $$$x^2$$$ must be less than $$$10$$$).</p><p>Is it possible to obtain a number that is divisible by $$$9$$$ through these operations?</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains an integer $$$t$$$ ($$$1 \le t \le 10^4$$$) — the number of test cases.</p><p>The only line of each test case contains the number $$$n$$$, without leading zeros. The length of the number does not exceed $$$10^5$$$.</p><p>It is guaranteed that the sum of the lengths of the numbers across all test cases does not exceed $$$10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output "<span class="tex-font-style-tt">YES</span>" if it is possible to obtain a number divisible by $$$9$$$ using the described operations, and "<span class="tex-font-style-tt">NO</span>" otherwise.</p><p>You can output each letter in any case (lowercase or uppercase). For example, the strings "<span class="tex-font-style-tt">yEs</span>", "<span class="tex-font-style-tt">yes</span>", "<span class="tex-font-style-tt">Yes</span>", and "<span class="tex-font-style-tt">YES</span>" will be accepted as a positive answer.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007346291901901303" id="id008760273081076183" class="input-output-copier">Copy</div></div><pre id="id007346291901901303"><div class="test-example-line test-example-line-even test-example-line-0">9</div><div class="test-example-line test-example-line-odd test-example-line-1">123</div><div class="test-example-line test-example-line-even test-example-line-2">322</div><div class="test-example-line test-example-line-odd test-example-line-3">333333333333</div><div class="test-example-line test-example-line-even test-example-line-4">9997</div><div class="test-example-line test-example-line-odd test-example-line-5">5472778912773</div><div class="test-example-line test-example-line-even test-example-line-6">1234567890</div><div class="test-example-line test-example-line-odd test-example-line-7">23</div><div class="test-example-line test-example-line-even test-example-line-8">33</div><div class="test-example-line test-example-line-odd test-example-line-9">52254522632</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id003492623990531558" id="id0003324928553042872" class="input-output-copier">Copy</div></div><pre id="id003492623990531558">NO
YES
YES
NO
NO
YES
NO
YES
YES
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example, from the integer $$$123$$$, it is possible to obtain only $$$123$$$, $$$143$$$, $$$129$$$, and $$$149$$$, none of which are divisible by $$$9$$$.</p><p>In the second example, you need to replace the second digit with its square; then $$$n$$$ will equal $$$342 = 38 \cdot 9$$$.</p><p>In the third example, the integer is already divisible by $$$9$$$.</p></div>