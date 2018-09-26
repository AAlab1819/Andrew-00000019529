  # Week4-Recurrence

## Buttons-268B

In this problem we have to find the worst case of finding a combination of an password from n(n is input) buttons. 
The rule is you are going to go back to the beginning if you press the wrong button.
The output of the program is the maximum times we have to press the buttons to find the pattern.

Example:

If there are 2 buttons then the maximum trial is 3 times.
If there are 3 buttons then the maximum trial is 7 times.
If there are 4 buttons then the maximum trial is 14 times.
etc.

Explanation:

This time we use a recursive function to find what is the maximum trial do we have to do.
The parameters are:
  1. The numbers of the buttons -> will never change
  2. The numbers of the trials -> +1 everytime we choose rightly and +1+guessed button if we choose wrong button
    note: we have to add the guessed number if we are wrong 'cause we have to press the guessed buttons since we start from the beginning
  3. Current guessed buttons -> +1 everytime we choose rightly
  4. How many choice of buttons we have left -> It start with number of buttons minus guessed buttons, then decreasing by one if we are wrong

Complexity:


## Igor In the Museum-598B

This time we have to count how many picture Igor see while he is trapped in the maze (lol just kidding, museum of course).
First we have to make the walls of the museum, where * is a wall and . is empty. 
Then we have to put Igor somewhere on the empty place (not wall), then he can moves everywhere he could and see as many pictures as he could.

Note: he could only see North, South, West, East from his position.

Example:

(1)
input:

5 6 3

******

*..*.*

******

*....*

******

2 2

2 5

4 3

output:

6

4

10

(2)

input:

4 4 1

****

*..*

*.**

****

3 2

output:

8

Explanation:
We use a recursive function with parameters:
1.

Complexity:
