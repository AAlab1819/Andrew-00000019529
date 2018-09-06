#Week1-Introduction

##Fraction-854A

It is a program to find the biggest fraction we can make with two numbers with two condition:
  1. The numerator+denumerator is equal to the main number
  2. The numerator is bigger than the denumerator
  3. Both are integer
 
Example:
If we enter number 100, then the biggest fraction we can make is 49/51
 
Logic explanation:
We will get the biggest fraction if the numerator is the closest number possible to the numerator.
Why? because the bigger the numerator will result the bigger number, but we have to remember condition 2.

Code explanation:
How to get the biggest numerator but still smaller than the denumerator?
First, we have to divide the main number by 2. So we have two exact numbers where, numerator/denumerator=1
Second, subsract and add those number with a same number(0,5 or 1).
  Why? because we need to find the closest integers number to those two numbers, which is +- 1 for even number,
  and +=0.5 to the odd number(because an odd number won't be an integer if we divide it by 2)

Tadaaa, we have found the biggest fraction we can make, where the smaller number we get is the numerator,
and the bigger number is the denumerator.
