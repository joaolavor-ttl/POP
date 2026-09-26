## Problem;
https://codeforces.com/problemset/problem/1346/B

### SDS-C
## Summarize

For this issue, we need to know  the number of lectures for each day should not exceed k1, and the number of lectures for each pair of consecutive days should not exceed k2.
And reembering, the boot camp will last for n days

so, we have to calculate the maximum number of lectures that can be conducted during the boot camp, finding the maximum integer m such that it is possible to choose n non-negative integers c1, c2, ..., cn (where ci, is the number of lectures held during day i) so that:

``` cpp
c1+c2+...+cn = m;
for each excursion day d, cd=0;
for each day i, ci<=k1;
for each pair of consecutive day(i, i+1), ci+ciunder[n+1]<=k2;
//Note that there might be some non-excursion days without lectures(i.e., its posiible that ci=0 even if i is not an excursion day).
```
## INPUT
the first line contains ine integers 