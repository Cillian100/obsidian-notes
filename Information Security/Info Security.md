- One of the most important assumptions in modern cryptography is **Kerckoff's principle** - in assessing the security of a crypto system one should always assume the enemy knows the method being used.

- **Public Key Cryptography:** the encryption key is made public, but it is computationally infeasible to find the decryption key without information only know to Bob.
- **Symmetric Key Cryptography:** the encryption and decryption keys are known to both Alice and Bob.

- Within symmetric key cryptography there are two types of ciphers **stream cipher** and **block cipher**.
	- **stream cipher:** the data is fed into the algorithm in small pieces and the output is produced in corresponding small pieces.
	- **block cipher:** a block of input bits is collected and fed into the algorithms all at once, a block of input bits is collected and fed into the algorithm all at once, and the output is block of bits.