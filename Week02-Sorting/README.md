# Week2-Sorting

## Dragons-230A

[Submission](https://codeforces.com/contest/230/submission/46126023)

In this problem we have to help Kirito to pass this level. In order to pass this level, he has to kill all of the dragons. Both Kirito and the dragons have strength (Some kind of Battle Power). Kirito can kill the dragon if only he has higher strength than the dragon. Everytime Kirito kills a dragon, he'll get some additional strength. There are 2 possible outcomes when Kirito fights the dragons:
  1. If there is any possibility that Kirito kills all of the dragons then print "YES"
  2. Else if, Kirito loses and of course he's dead lol, then we print "NO"
  
So, all we have to do is give him the best strategy possible to kill all of the dragons if there is any.
  
Example:

Kirito has 3 points of strength and he has to fight 2 dragons with strength in sequence 4 and 2, and will give Kirito 2 and 3 points of strength.

If he chooses to fight the first dragon first, then he'll lose and die (Kirito's strength is lower than the dragon(2<4)). But if he chooses to fight the second dragon first, then he'll win and get 3 points of strength (Kirito's current strength is 6), then he can win the fight with the first dragon.

So, there is a possible way for Kirito to kill all of the dragons, then we print "YES"

Explanation:

In order to choose the best order of dragon Kirito has to fight, first of all we have to sort the strength of the dragons (In this problem I use HEAPSORT).
By sorting the strength of the dragons, Kirito will fight the dragon from the weakest one to the strongest one. So, he doesn't have to worry about the stronger dragon if he doesn't even can fight the weakest one LOL.
 
## Spyke Talks-291A

[Submission](https://codeforces.com/contest/291/submission/46126052)

In this problemset, we have to help Polycarpus the really wants to know director of a large corporation to figre out which and how many of his secretaries that are talking with Spyke Talk (feels like I have ever heard it hmmm). Every channel has a unique number which only could connect 2 people in one call. If the number is 0 then the secretary is not using the Spyke talk, and if there are more than 2 same numbers(ex: 1 1 2 1), then it means Polycarpus has a wrong record. The secretary can use Spyke Talk to people outside the corporation by the way.

There are 2 possible outcomes in this problem:
  1. The number of secretaries that are talking to each other if Polycarpus has a right record
  2. -1 if Polycarpus has a wrong record (there are more than 2 same numbers)

Example:

If Polycarpus has 4 secretaries, and the channel they are connected are 0,1,2,1

Then it means the first secretary is not using Spyke Talk, the second and fourth secretary is talking to each other in Spyke Talk, and the third secretary is using Spyke Talk to talk to someone outside the corporation.

So, the outcome is 1

Explanation:

To make it easier to find if there is any same number(ID/channel) within the secretary, then the first thing to do is by sorting the list (I'm using shellsort in this problem).
Why it'll be easier if we sort it? Because the position same number(ID/channel) will be side by side.

So all we have to do now is to check how many same numbers on the right side of the pivot. The possibilities are:
  1. If the pivot is 0, we don't have to check anything since the secretary doesn't using the Spyke Talk
  2. If it's only 1 same number on the right side of the pivot then it means the secretaries are talking to each other.
  3. If there are 2 same numbers on the right side of the pivot then Polycarpus has a wrong record
  (we don't have to check if there are more than 2 since more equals than 2 is wrong)

## Oath of the Night's Watch-768A

[Submission](https://codeforces.com/contest/768/submission/46126090)

HELLO GAME OF THRONES FANS! LOL
This time we have to help Jon Snow to choose the stewards that meet the requirement Jon wants.The requirement is simple, since everyone has a different strength (measured by integer), Jon only wants to choose the steward that has someone that is smaller AND bigger strength than him. In short, Jon doesn't want to choose the "weakest" and "strongest" steward. The outcome of this program is the number of stewards that will join Jon.

Example:

If there are 6 Stewards with strength in sequence: 1,3,4,5,6,6
So there will be 3 Stewards that will join Jon Snow.

Explanation:

To make it easier to know which one are the weakest and stronger one, then Jon Snow ask the stewards to make a line which make a sequence from the lowest strength value to biggest strength value. By doing so, Jon will know which one is the weakest one (which is in the first line) and the strongest one (which is in the last line), then he will ask what is their strength value. So the stewards that have strength value bigger than the weakest one AND smaller than the strongest one may join Jon Snow the white wolf!.

Note: I use combsort to help Jon Snow arrange the stewards.
