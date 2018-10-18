  # Week6-HeapTree

## Find The Running Median

In this problem we have to find the median of a line of numbers everytime it has a new member. The input is n for how many numbers we want to input, and a new member we want to input to the line. 

Example:

<pre>
input:
6
12
4
5
3
8
7

output:
12.0
8.0
5.0
4.5
5.0
6.0
</pre>

Explanation:

We all know the median of a line of number is the one in the middle if the line is sorted. So all we have to do is sort the line everytime we input a new member, then print the one in the middle if the length of the line is odd, and 2 numbers in the middle if the length is even.

Complexity:

O(nlogn) where n is the number of the line (complexity of heapsort)

## Roy and Trending Topic

In this problemset we have to help Roy to make a widget that shows Trending Topics. Every topic has an id, and a zscore.
The zscore will change with conditions below:
  1. A 'Post', its z-score is increased by 50.
  2. A 'Like' on such a Post, increases the z-score by 5.
  3. A 'Comment' increases z-score by 10.
  4. A 'Share' causes an increment of 20.

The input is:
First line contains integer N (number of topic)
Each contains 6 space separated numbers representing Topic ID, current z-score - Z, Posts - P, Likes - L, Comments - C, Shares - S

Example:

<pre>

input:
8
1003 100 4 0 0 0
1002 200 6 0 0 0
1001 300 8 0 0 0
1004 100 3 0 0 0
1005 200 3 0 0 0
1006 300 5 0 0 0
1007 100 3 0 0 0
999 100 4 0 0 0

output:
1003 200
1002 300
1001 400
999 200
1007 150

</pre>

Explanation:

We use heapsort to sort the topic base on its change in zscore, and then print the id and its new zscore

Complexity:

O(nlogn)(complexity of heapsort)
