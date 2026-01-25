- System Flow:
	- arrival process, λ average rate, distribution
	- queue process, method, size 
	- service process, µ average rate, distribution
	- arrival and service processes are stochastic 

- **Little's Law:**
	- the average number of customers stored in a system is equal to the product of the average arrival rate to the system and the average time in the system 
	$$N = λT$$
- **State Of Queuing System:**
	- **state 0:** when the system is empty
	- **state 1:** means there is one customer in the system
	- **state 2:** means there are n customers in the system
- If we examine the system every d seconds, where d is very small, then there is likely to be only 1 arrival and/or 1 departure occurring
- Therefore we can get either an arrival on it's own and we move up a state, or we can get a departure on it's own and move down a state
- We could get both an arrival and departure where we stay in the state that we are in, or we get nothing happening and we remain in the same state
- The long term probability of being in any state Sn is defined by Pn. If this is the steady state, then we can cut the chain at any point and balance the flows in each direction
$$
\begin{aligned}
λd\ P0=µdP1\\ 
λd\ P1=µdP2\\ 
λd\ P2=µdP3\\ \\
P1=\frac{λ}{µ}P0 \\
P2=\frac{λ}{µ}P1 \\
P3=\frac{λ}{µ}P2 \\
Pi=\frac{λ}{µ}Pi-1 \\
\end{aligned}$$

### Kendall's Notation:
- The standard system used to describe and classify queuing nodes, the parameters include A/S/c/K/N/D
	- **A: The Arrival Process:**
		- a code describing the arrival process
	- **S: The Service Time Distribution:**
		- gives the distribution time of services of a customer
	- **c: The Number of Services:**
		- the number of service channels, the M/M/1 queue has a single server and the M/M/c queue has c sources
	- **K: The number of Places In The Queue:**
		- the capacity of queue, or the maximum number of customers allowed in the queue 
	- **N: The Calling Population:**
		- the size of calling source, the size of the population from which the customers come
	- **D: The Queue's Discipline:** 
		- the service discipline or priority order that jobs in the queue are server 
			- **FIFO:** first in first out
			- **LIFO:** last in first out
			- **SIRO:** service in random order
			- **PQ:** priority queue
			- **PS:** processor sharing
- The most basic is the - **arrival distribution / service distribution / number of servers**
- Three common types of distribution are:
	- **M:** memoryless or markovian process
	- **D:** deterministic, where there is no randomness
	- **G:** general, where it does not fit one of the other known process 