1. Let X1 and X2 be two independent tosses of a fair coin. Find the entropy H(X1) and the joint entroyp H(X1, X2). Why is H(X1, X2)= H(X1)+H(X2)?

2. Consider an unfair coin where the two outcomes heads and tails have probabilities p(heads)=p and p(tails)=1-p.
	a. if the coin is flipped two times what are the possible outcomes along with their respective probabilities 
	b. show that the entropy in part a is -2p log2(p) - 2(1-p)log2(1-p).

3. A random variable X takes the values 1, 2, .., n with probabilities 1/2, 1/2^2, ..., 1/2^n. Calculate the entropy H(X).

4. Let X be a random event taking on the values -2, -1, 0, 1, 2 all with positive probabilities. What is the general inequality/equality between H(X) and H(Y), where Y is the following.
	a. Y=2^X 
	b. Y=X^2 

5. In this problem we explore the relationship between the entropy of a random variable X and the entropy of a function f(X) of the random variable. THe following is a short proof that shows H(f(X))<=H(X). What rules are followed for this proof? 
		H(X, f(X)) = H(X) + H(f(X)|X) = H(X)
		H(X, f(X)) = H(f(X)) + H(X | f(X)) >= H(f(X))
- letting X take on the values +- 1 and letting f(x)=x^2 show that it is possible to have H(f(X))<=H(X).