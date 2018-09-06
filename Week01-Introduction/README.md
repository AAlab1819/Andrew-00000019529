# Week1-Introduction

## Fraction-854A

The aim is to find the biggest fraction we can make with two numbers with three conditions:
  1. The sum of the numerator and the denumerator is equal to the main number
  2. The numerator is bigger than the denumerator
  3. Both are integer
 
Example:
If we enter number 100, then the biggest fraction we can make is 49/51
 
Explanation:
We will get the biggest fraction if the numerator is the closest number possible to the numerator.
Why? because the bigger the numerator will result the bigger number, but we have to remember condition 2.

How to get the biggest numerator but still smaller than the denumerator?
First, we have to divide the main number by 2. So we have two exact numbers where, numerator/denumerator=1
Second, subtract and add those number with a same number(0,5 or 1).
  Why? because we need to find the closest integers number to those two numbers, which is +- 1 for even number, and +=0.5 to the odd      number(because an odd number won't be an integer if we divide it by 2)

Tadaaa, we have found the biggest fraction we can make, where the smaller number we get is the numerator,
and the bigger number is the denumerator.

## Tricky Alchemy-912A

The problem is about how to find additional crystal we needed to make three kinds of ball with two kinds of crystal, where:
  1. To make one Yellow Ball we need two Yellow Crystals
  2. To make one Green Ball we need one Yellow Crystal and one Blue Crystal
  3. To make one Blue Ball we need three Blue Crystals
  
Then we have to find how many Crystals we need to make all the balls.
  
Example:
If we got two Yellow Crystals and three Blue Crystals, and we have to make 1 Yellow Ball, 1 Green Ball, and 1 Blue Ball, then we need three Yellow Crystals and four Blue Crystals. But we only have two Yellow Crystals and three Blue Crystals. So we need another Yellow Crystal(1) and Blue Crystal(1). So, we need two Crystals(one yellow and one blue)

Explanation:
First, We have to find how many Yellow and Blue Crystals we needed(separatedly)
Second, subtract the crystal we need with the crystal we have(also separatedly)
  If the result is positive, then that's the amount of crystal we need.
  But if the result is negative, then we don't need additional crystal(then change the value to 0).
Third, sum the Yellow and Blue Crystal, then we get the amount of crystal we need from both colors.

## Diverse Team-988A

The objecive of this problem is to make a team that consist k numbers of student which all have different ranking from n number of students. There are 2 possible outcomes:
  1. If there are k or more different ranking from n students, then the result is "Yes" and the index of the student
  2. But if there are not enough k different ranking from n students, then the result is "No" 

Example:
We have to make a team of 3 students from 5 students on that school.
The ranking of the students in sequence are: 1,1,2,2,3
Then the result we get is: "Yes" 1 3 5(there are another possibilty, but those are the first index of a value)

Explanation:
First, we have to know are there enough different number, and how much there are.
  Note:We also store the index of the first time a number show up in an array.
Second,
  If there are enough number, then we have to print "Yes", and print all of the index we stored before
  If there are not enough number, then we have to print "No"
