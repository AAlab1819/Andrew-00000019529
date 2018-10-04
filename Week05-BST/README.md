  # Week5-BST

## Registration system-4C

In this problem we have to make an online registration server. The output of the program are:
	1. "OK", if the username has not taken
	2. (name)(number of times the name has taken -1), if the username has taken

Example:

4<br\>
abacaba<br\>
acaba<br\>
abacaba<br\>
acab<br\>

Explanation:

First, we use an array of string to store the username.
Then we use map with index of string and value of int to store and check how many times the username has taken.
If the username has taken for i-th times, then we are going to add (i-1) to the string of username

If the username is taken for the first time then we print "OK", otherwise we print the username(the one we have edit) 

Complexity:


## Igor In the Museum-598B


