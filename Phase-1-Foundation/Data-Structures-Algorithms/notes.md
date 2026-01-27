Notes: Eulerian Cycles \& The Josephus Problem.



**Leonhard Euler Meets Genome Sequencing**

https://www.youtube.com/watch?v=XGW6jFyNjTY



Leonhard Euler 1707 - 1783 Seven Bridge of Konigsberg



A graph is collection of nodes and edges between them.



A cycle in graph is called Eulerian if it visits every edge exactly once.

A graph is called Eulerian if it has an Eulerian cycle.

All nodes of an Eulerian graph are even.

A graph is balanced if all its nodes are even.



Eulerian Cycle Theorem.

Eulerian Path - A connected graph has an Eulerian path is and only if it is either balanced or has two odd nodes, i.e., nodes of odd degree.

A directed graph is balanced is the indegree of each node in the graph equals its outdegree.



\#Eulerian Cycles in Python or Konigsberg 7 Bridges



import networks as nx



graph = nx.Graph(\[(1,2),(1,3),(1,4),(2,3),(2,4),(3,4),(3,5),(4,5)])

print(mx.eulerian\_path(graph))



A graph can be drawn without lifting a pencil if it has zero or two odd nodes.



\#Snow Plow puzzle solution in Python



import network as nx



grid = nx.MultiGraph(nx.grid\_2d\_graph(m=4,n=4))

grid = nx.eulerize(grid)

cycle = nx.eulerian\_circuit(grid, source=(0,0)

print('-->'.join(str(edge\[0]) for edge in cycle))



\#Univerisal String Puzzle

Given a integer *k*, construct a circular string that contains each binary *k*-mer as a substring exactly once.



**Josephus Problem: Computer Science Meets Ancient History**

https://www.youtube.com/watch?v=-JGuXte8BOg



67 AD Jewish/Romans Wars

Josephus Flavius and 40 others rebels were trapped in a cave, they chose suicide. They began killed every third remaining person until no one was left. Josephus figured were to stand to avoid this fate.

He chose 30th.

*n* = rebels standing in a circle

*k* = kth rebel is killed, starting at 0 so (k-1) is killed.

Position of survivor (*n,k*)

if *n* = 13 and *k* = 3 then Josephus is (12)

Naive Strategy *O*(*n*log*n*): Since only *k*-1 out of *k* consecutive rebels survive, it will take approximately log*k*/(*k*-1>^*n* traversals of the circle, implying that the running time is *O*(*n*log*n*)

New Number *O*(*n*)

Josephus(*n,k*)-*k*)mod*n*=Josephus(*n*-1,*k*)

Binary problem *k*=2

Even *n*

Josephus(*n*,2)=2\*Josephus(*n*/2,2)

Odd *n*

Josephus(*n*,2)-2\*Josephus((*n*+1)/2,2)-2



def binary\_josephus(n):

 	return (n ^ (1 << (int.bit\_length(n) - 1))) << 1





Josephus blew my mind—moving from $O(n \\log n)$ simulation to bitwise $O(1)$ logic.



Date: 1/27/2026 Topic: Week 1 Programming Challenges (Environment \& I/O)



Implementation Details:



C++: Implemented sum\_of\_two\_digits.cpp using standard I/O (std::cin, std::cout). Verified the toolchain by compiling via CLI (g++) and running in the Windows terminal.



Python (Pending): Re-implementing in Python to verify the PyCharm environment and Coursera’s Python 3 interpreter.



Key Learning: Focused on the "Contract" of the grading sandbox—ensuring that output matches the expected format exactly without extraneous print statements.



Project Structure:



Standardized sub-directory naming conventions for challenges (e.g., 1\_sum\_of\_two\_digits).



Successfully submitted and received 100% on the initial smoke test.



