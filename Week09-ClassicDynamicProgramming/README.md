  # Week9-Classic Dynamic Programming

## 10130 - SuperSale

In this problem we have to count how much "value" a family can carry, from some variety of items. Every family has different number of 
family members, and every family member has different weight limit.

Example:

Item A has value of 6 and weight of 7
Item B has value of 4 and weight of 3
Item C has value of 3 and weight of 4

If the family only has one family member and he has weight limit of 8, then his best choice is take item B and C, since he will get value of 7 rather than just take item A and get 6.

Explanation: 

We use dynamic programming to solve this problem. The first thing we have to do is to find the maximum value we can hold at certain point of weight. To do so, we use loop for every item, and each item will be looped from the heaviest to lightest. If the weight AND value is lighter/smaller or equal to the current checked item's weight AND value, then we will change the value of the "certain weight"


Complexity:

The worst complexity is O(n^2) if the number of case and items are the same.
