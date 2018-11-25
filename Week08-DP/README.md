  # Week8-DP

## Kuriyama Mirai's Stones-433B

[Submission](https://codeforces.com/contest/433/submission/46127257)

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

## Party Lemonade-913C

[Submission](https://codeforces.com/contest/913/submission/46127402)

In this problem we have to find the cheapest way to buy L liter of lemonade, where the every bottle has different cost, and the volume of i-th bottle is 2^i-1

Example:

There are 4 types of bottle and we need 12 liters of lemonade, where the costs are: 20 30 70 90

So the first bottle is 1 liter, the second is 2 liters, the third is 4 liters, and the fourth is 8 liters.

Our best way to buy 12 liters of lemonade is 1 bottle of 8 litters and 2 bottles of 2 liters, where the cost is 150

Explanation:

The first thing we need to find is the value of the bottle, or we can say L/price, because we will use the bottle with the biggest value. .

Then we'll sort the value, and then find the total price from that rank of value. (We can use one type of bottle more than once)

I use reverse value (price/L) because I don't change my heapsort, so if I reverse it, it will "reverse" the sort, and I dont have to sort it from the biggest to the smallest.

Complexity:

O(nlogn), complexity of heapsort
