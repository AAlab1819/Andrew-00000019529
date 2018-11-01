  # Week7-Greedy

## Kuriyama Mirai's Stones-433B

We have to count Kuriyama Mirai's Stones between l-th and k-th base on 2 conditions:
  1. BASE ON WHEN SHE GOT IT 
  2. BASE ON HOW MUCH IT COST (SORTED)

Example:

If her stones' cost are: 1,3,4,2

The answer of the first question for l is 2 and r is 3 is 7 (3+4)
The answer of the second question for l is 2 and r is 3 is 5 (2+3)

Explanation: 

The most important thing is, we store two type of array. The first one is the unsorted one, and the sorted one. Then all we have to do is count how much the stone cost between the range.

Complexity:

O(n^2), where n is the number of question

## Partition-946A

In this problem, we have to make a partition from a set of numbers to two sets of numbers, where B(first set) - C(second set) is the highest

Example:

input:

1 2 -3

output:

6 -> (1+2)-(-3)

Explanation:

All we have to do is separate the positive numbers and negative numbers, cause minus of minus is plus, which will make the difference between B and C bigger.

Complexity:

O(n)
