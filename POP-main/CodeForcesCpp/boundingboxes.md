## Problem;
https://codeforces.com/gym/106193/problem/B

### SDS-C
## Summarize

We need to help ICPC to determinate the maximum possible volume of a souvenir box that fits inside all of the packing boxes.

> ** according to the shipment rules, the souvenir box must be a regullar rectangular parallelepiped.When the souvenir box is placed inside the box, the souvenir may to be routated, the sides must remain parallel to the sides of the packing box. And remember, extra space is not an issue, as it will be filled with plastic wrap.

## INPUT
```cpp
the firts line contains a integer n, int n, denoting the number of packing box types provided by the delivery service.

the i-th folowing n lines contains three integers:
int w: is width int h: is the height int d: is the depth of the packing box
```
## OUTPUT
```cpp
print the largest possibel volume souvenir box that fits inside all of the packing boxes.Remember that the souvenir box can be rotated, as long as its sides parallel to the sides of the packing box.
```
## Deduce

1. the first rule is aling the sides by size:
int smallest=0, midle=0, largest=0;
2. arrange in the ascending order: V=A.B.C