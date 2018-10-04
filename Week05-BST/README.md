  # Week5-BST

## Registration system-4C

In this problem we have to make an online registration server. The input in this program is the username and the output of the program are:
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
OK
OK
Andrew1
Andrew2

Explanation:

First, we use an array of string to store the username.
Then we use map with index of string and value of int to store and check how many times the username has taken.
If the username has taken for i-th times, then we are going to add (i-1) to the string of username

If the username is taken for the first time then we print "OK", otherwise we print the username(the one we have edit) 

Complexity:


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

## Party-115A




