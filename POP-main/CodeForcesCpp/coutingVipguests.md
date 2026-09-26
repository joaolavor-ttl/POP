## Problem;
https://codeforces.com/gym/106170/problem/E

### SDS-C
## Summarize

>the king is throwing a party and wants to invite a select number of VIP guests. Only guests living in houses with a key number of 1 are allowed to attend the party. To estimate how much food and how many drinks he needs to buy, we need to know how many VIP guests there are.

## INPUT

the firts line contains a single integer t(1<=t<=2.10^5), the number of test cases.

the first line of each test contains two integers A(1<=A<=10^18), the first house number, and B(A<=B<=10^18), the last house number.

the key number of a house is the largest odd divisor of the house number.

## OUTPUT

for each test case, print the number of invited guests; that is, the number of houses where the key number is 1.

## Deduce

We need to aply a math simplification to read the big vectors in the limit time. Any integer number X can be decomposed into the form X=(2^k)*m, where m is a odd number.
replacing:
m=1, X=(2^k)*1=2^k
in others words, the valeu doubles at each step, so we reach 10^18 in 60 steps.