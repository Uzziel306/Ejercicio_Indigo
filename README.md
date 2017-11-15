## Largest product in a series
Find the greatest product of K consecutive digits in the N digit number.
Input Format
First line contains T that denotes the number of test cases.
First line of each test case will contain two integers N & K.
Second line of each test case will contain a N digit integer.
Constraints
1 <= T <= 100, 
1 <= K <= 7, 
K <= N <= 1000.
### Usage
`./ex01 -t -n -k -nb`
```
-t: the number of test cases.
-n: length of the number
-k: consecutive digits
-nb: number to calculate
```
### examples

`./ex01 2 10 5 2729360626`
it will print **2268** because 7x2x9x3x6 = 2268.

`./ex01 2 8 4 45624325`
it will print **240** because 4x5x6x2 = 240.
