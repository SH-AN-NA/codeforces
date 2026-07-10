<h2><a href="https://codeforces.com/contest/1459/problem/B" target="_blank" rel="noopener noreferrer">1459B — Move and Turn</a></h2>

| | |
|---|---|
| **Difficulty** | 1300 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1459B](https://codeforces.com/contest/1459/problem/B) |

## Topics
`dp` `math`

---

## Problem Statement

<div class="header"><div class="title">B. Move and Turn</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>512 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>A robot is standing at the origin of the infinite two-dimensional plane. Each second the robot moves exactly $$$1$$$ meter in one of the four cardinal directions: north, south, west, and east. For the first step the robot <span class="tex-font-style-bf">can choose any of the four directions</span>, but then at the end of every second it <span class="tex-font-style-bf">has to turn</span> 90 degrees left or right with respect to the direction it just moved in. For example, if the robot has just moved north or south, the next step it takes has to be either west or east, and vice versa.</p><p>The robot makes <span class="tex-font-style-bf">exactly</span> $$$n$$$ steps from its starting position according to the rules above. How many different points can the robot arrive to at the end? The final orientation of the robot can be ignored.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The only line contains a single integer $$$n$$$ ($$$1 \leq n \leq 1000$$$) — the number of steps the robot makes.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print a single integer — the number of different possible locations after <span class="tex-font-style-bf">exactly</span> $$$n$$$ steps.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id005225279704584864" id="id00668050361065117" class="input-output-copier">Copy</div></div><pre id="id005225279704584864">1
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0045768572344551695" id="id0013896433674752195" class="input-output-copier">Copy</div></div><pre id="id0045768572344551695">4
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id002790087182815024" id="id007310829096130002" class="input-output-copier">Copy</div></div><pre id="id002790087182815024">2
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005893842078281029" id="id009141217301560728" class="input-output-copier">Copy</div></div><pre id="id005893842078281029">4
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id004001312130419662" id="id0031348433315210267" class="input-output-copier">Copy</div></div><pre id="id004001312130419662">3
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id007705287394079026" id="id006395263814237621" class="input-output-copier">Copy</div></div><pre id="id007705287394079026">12
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first sample case, the robot will end up 1 meter north, south, west, or east depending on its initial direction.</p><p>In the second sample case, the robot will always end up $$$\sqrt{2}$$$ meters north-west, north-east, south-west, or south-east.</p></div>