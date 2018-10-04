  # Week5-BST

## Registration system-4C

In this problem we have to make an online registration server. The input in this program is the number of user and their usernames and the output of the program are:
	1. "OK", if the username has not taken
	2. (name)(number of times the name has taken -1), if the username has taken

Example:

input:<br/>
4<br/>
Andrew<br/>
James<br/>
Andrew<br/>
Andrew<br/>
<br/>
output:<br/>
OK<br/>
OK<br/>
Andrew1<br/>
Andrew2

Explanation:

First, we use an array of string to store the username.
Then we use map with index of string and value of int to store and check how many times the username has taken.
If the username has taken for i-th times, then we are going to add (i-1) to the string of username

If the username is taken for the first time then we print "OK", otherwise we print the username(the one we have edit) 

Complexity:

O(nlogn)

## Party-115A

To cut the power of seniority in a party, we have to make a group in a party where nobody will be in the same group with their boss.The input is i-th employee's boss or -1 if the employee doesn't have a boss and  the output is the minimum number we can make with the condition before. 

Example:

input:<br/>
5<br/>
-1<br/>
1<br/>
2<br/>
1<br/>
-1

output:<br/>
3

Explanation:

To separate all employees from their boss then the first thing we do is find the deepest position on a team (the longest team).
We will check all employees' boss and recursively do it 'till we found the highest rank of a team. After check all of the employee then now we have the minimum number of groups we can make which is the number of the longest hierarchy.

Complexity:

O(n^2)

## Christmas Spruce-913B

The condition in this problem is that the root should have at least three children, otherwise it's not a spurce. The input is the number of leaves there are and the root of the i-th leaf. The output is "Yes" if it's a spurce and "No" if not.

Example:

input:<br/>
7<br/>
1<br/>
1<br/>
1<br/>
2<br/>
2<br/>
2

output:<br/>
No

Explanation:

We have to check whether the leaf have child or not, if the leaf doesn't have a child then it means that leaf is a child of it's root.
Ther other leaves that have child should have exactly 3 children. If all leaf meet these condition then it means it's a spurce, otherwise it's not.

Complexity:

O(n)
