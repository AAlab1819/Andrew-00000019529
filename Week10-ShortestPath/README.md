  # Week9-Shortest Path

## Dijkstra? - 20C

In this problem we have to find the cheapest path using Dijkstra. 

Note: Dijkstra’s algorithm can be used to determine the shortest(cheapest in this case) path from one node in a graph to every other node within the same graph data structure, provided that the nodes are reachable from the starting node.

So we don't have to worry if the path is longer as long as the get the least cost.

Example:

| Source  | Destination | Cost | 
| :---: | :---: | :---: |
| 1  | 2 | 2 |
| 2  | 5 | 5 |
| 2  | 3 | 4 |
| 1  | 4 | 1 |
| 4  | 3 | 3 |
| 3  | 5 | 1 |

So, the cheapest route is 1->4->3->5 where the cost is 1+3+1=5, even though the shortest path is 1->2->5 but the cost is 2+5=7.

Explanation: 

Dijkstra's rules/steps:

  1. Every time that we set out to visit a new node, we will choose the node with the smallest known distance/cost to visit first.
  2. Once we’ve moved to the node we’re going to visit, we will check each of its neighboring nodes.
  3. For each neighboring node, we’ll calculate the distance/cost for the neighboring nodes by summing the cost of the edges that lead to the node we’re checking from the starting vertex.
  4. Finally, if the distance/cost to a node is less than a known distance, we’ll update the shortest distance that we have on file for that vertex.

Complexity:O(nlogn)

## The Two Routes - 601A

In this problem, we have to find the smallest time a train and a bus can arrive at the SAME time. The rule is, if there are a rail between the 2 towns, then the bus can't use that path (there are no roads). The output of the program is:

  1. The smallest same time of 2 different vihicles (bus and train) from 1 to N, if possible
  2. -1 if it's impossible
  
Note: The rail and the road is bidirectional.

Example:

The rails are:

Town 1 <=> Town 3
Town 3 <=> Town 4

So, the roads are:

Town 1 <=> Town 2
Town 1 <=> Town 4
Town 2 <=> Town 4

Actually, the bus can arrive in just one hour (1 => 4), but train fastest time is 2 hours (1 => 3 => 4). So, the bus have to adjust the train, so the bus will choose other path (1 => 2 => 4), where the time is also 2 hours.

Explanation: 

First of all, the have to find the adjacency matrix of this problem, for the example above, the adjency matrix is:

     1     2     3     4

1    0     0     1     0  

2    0     0     0     0

3    1     0     0     1

4    0     0     1     0

Complexity:
