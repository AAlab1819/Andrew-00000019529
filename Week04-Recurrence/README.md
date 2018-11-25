  # Week4-Recurrence

## Buttons-268B

[Submission](https://codeforces.com/contest/268/submission/46126441)

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

O(n) where n is number of buttons

## Igor In the Museum-598B

[Submission](https://codeforces.com/contest/598/submission/46126818)

This time we have to count how many picture Igor see while he is trapped in the maze (lol just kidding, museum of course).
First we have to make the walls of the museum, where * is a wall and . is empty. 
Then we have to put Igor somewhere on the empty place (not wall), then he can moves everywhere he could and see as many pictures as he could.

Note: he could only see North, South, West, East from his position.

Example:

<pre>
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
</pre>

Explanation:
We use a recursive function with parameters:
  1. Array of postion of the wall -> never change
  2. x position of Igor -> will change if Igor move to North or South
  3. y position of Igor -> will change if Igor move to East or West
  4. Number of Row of the walls -> never change
  5. Number of Column of the walls -> never change

Everytime Igor move, he will explore to all directions(recalled the function)
If Igor find an empty space, the he will see to exactly(right beside him) North, South, West, East direction from his postion.
  note: If he sees a wall, then there's a picture there. Since he see a wall, he won't explore any further of that side (he can't pass through the wall.

Complexity:

O(n* m) where n is number of row and m is number of column
