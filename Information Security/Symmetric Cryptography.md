- **Kerckhoff's Principle:** it is always safer to assume that all the details of the cryptographic scheme are publicly known. 
- ciphertext can definitely leak information to an attacker
- there are two types of encryption methods as regard to their vulnerability to cryptoanalysis
	- **insecure method:** those which are vulnerable to cryptoanalysis
	- **secure method:** 
		- **a.)** computationally secure: it is theoretically possible for an attacker to find k, but the required methods cannot be implemented in practice. 
		- **b.)** unconditionally secure: it is impossible that k can be found by mallet 
- An unconditionally secure cipher is called a perfect cipher and we say that it provides perfect secrecy. 
$$p_{L|C}(l|c) = p_L(l) \quad \text{for all } l \in L, c \in C$$
- it must also hold for a perfect cipher that **I(X;Y)=0**
	- on average the ciphertext does not reveal any information about the plaintext 



- Shannon also proposed to measure the secrecy of a practical cipher in terms of key equivalence. 
$$H(K|C)$$
- if H(K|C) = 0 on average there is no uncertainty about the key when the ciphertext is known 
	- then the ciphertext is breakable (in principle so long as mallet has enough computational resources)
- if H(K|C)>0 then there is uncertainty about the key
	- then the ciphertext is unbreakable: mallet will always have some uncertainty about the key and its plaintext
	- if H(K|C)=H(K), uncertainty is maximum (perfect cipher). 