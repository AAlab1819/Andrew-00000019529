  # Week2-Complexity

## Insomnia Cure-148A

In this problem we have to help the reverse sleeping beauty to torment every multiples of k-th,l-th,m-th, and n-th dragon out of d dragons.
Where d are and input of how many dragons there are, and k,l,m,n is also an input that will determine the dragons fate.
  1. The multiples of k-th dragons got punched in the face with a frying pan
  2. The multiples of l-th dragons got his tail shut into the balcony door
  3. The multiples of m-th dragons got his paws trampled with sharp heels
  4. The multiples of n-th dragons got threatened by calling princess' mom, and he withdrew in panic.
  
The outcome of this problem is how many poor dragons there are.
  
Example:

if she wants to torture evry multiples of 2nd(k), 3rd(l), 4th(m), 5th(n) out of  24 dragons. 
Then there'll only 7 lucky dragons and the other 17 are going to meet their fate. 
(Since 1, 7, 11, 13, 17, 19 and 23 are not the multiples of 2,3,4,5)

Explanation:

All we have to do is to check that the i-th dragon is one of k,l,m,n multiple or not. (The dragon is safe if the answer is not)

Complexity:

Worst Case: O(n) -> loop from 1st dragon to d-th dragon
Average Case: θ(n) -> if none of the torment input is 1, then loop from 1st dragon to d-th dragon
Best Case: Ω(1) -> if k/l/m/n is one


## I Wanna Be the Guy-469A

Together we stand, divided we fall! Two competitive gamers are going to play the same game. 
But it turns out they don't always can finish all the levels by theirselves.
So they need to team up in order to finish all of the levels.

There are n levels on this game, and the first player only could finish p levels and the second player only could finish q levels.
Since they don't have to play the game's level in sequence, so the levels they could finish don't always be in sequence.

If 1st player and 2nd player team up, they could pass the level if ONE OF THEM could finish it.
  1. If they finish the game then they both will shout "I wanna Be the Guy"
  2. If not, they'll scream Oh, my keyboard!
  
Example:

If there are 4 levels
The 1st player could finish 3 levels (1,2,3)
The 2nd player could finish 2 levels (2,4)

They are going to shout "I wanna Be the Guy" 'cause the could finish all of the level since:
  1. 1st player could finish level 1,3
  2. 2nd player could finish level 4
  3. Both can finish leveL 2

Explanation:

We have to make an array of bool to know is the level is passable by the players.
First we have to check all of the levels that 1st player could finish, every i-th level the player finished will fill the (i-1)th array of bool with true value
Then we do the same thing to 2nd player to fill the same bool (the previous content won't be erased)

If all of the level are passed, then it means they win. Otherwise they lose.

Complexity:

Worst Case: O(n)
Average Case: θ(n)
Best Case: Ω(n)

Since no matter what, the program will check from 1st level to n-th level.

## Vanya and Lanterns-492A

In this case we have to help Vanya to find out what's the minimum radius that a lamp needed if she wants to light 100% of the street of length l by n lanterns.
The length and number of lanterns are inputs, and the output is the minumum radius of lamp.
Note: every lantern is in different or same place and is an input

Example:

The length of the street is 15 and there are 7 lanterns on 15 5 3 7 9 14 0

Then the minimum radius of light we need is 2.5, since the maximum distance of the lamps are 5 (2.5=5/2, since there are light from left and right).

Explanation:

First of all, we need to sort the position of the lantern to know which lanterns have the furthest distance from the other one.

Then, we need to assume that the furthest place form light is either the distance between the beginning of the road and the first lantern
or the distance between the end of the road and the last lantern. 
Note: since there are no lantern on the left of the beginning and on the right of the end of the road.

Then all we have to do is to check every distance of the lantern and the minimum radius is the half of the distance.
If we found the bigger minimum radius then we'll replace the old one.

Complexity:

Worst Case: O(nlogn)
Average Case: θ(nlogn)
Best Case: Ω(nlogn)

Note: It's the complexity of heapsort, I choose heapsort because it's the most stable one.
