## Marginalisation:
- recovering the pmf of each individual r.v from the joint pmf 
$$p(x)=\sum_{y \in Y}p(x|y)p(y)$$
## Properties of Entropy:
1. H(X) >= 0
	- H(X) = 0 for deterministic variables only
2. H(X) <= log|X|
3. The uniform distribution (p(x) = 1/|x| = 1/m for all x ∈ X) yields H(X)=log|X|; so it maximises entropy for |X| = m  
	- no other distribution (pmf) yields greater entropy 
	- it is the most 'random', most surprising, least compressible distribution
4. H(X, Y) <= H(X) + H(Y)
5. Conditioning cannot increase entropy 
	- H(X|Y) <= H(X) + H(Y)


## Mutual Information:
- The reduction in uncertainty about X due to knowledge of Y
$$I(X;Y)=\sum_{x,y}P(x,y)log(\frac{P(x,y)}{P(x)P(y)})$$
- In terms of entropy 
$$I(X;Y) = H(X)-H(X|Y) = H(Y)-H(Y|X)$$
## Properties of Mutual Information:
$$
\begin{array}{ll}
1.\ I(Y;X)=I(X;Y)\\
2.\ I(X;Y)>= 0\\
3.\ I(X;Y) = 0 \text{ if X and Y are independent}\\
4.\ I(X;X) = H(X) \text{(entropy can be called 'self information')}\\
\end{array}$$