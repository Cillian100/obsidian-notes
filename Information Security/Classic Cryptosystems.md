## Shift Ciphers
- One of the earliest cryptosystems is attributed to Julius Ceaser - suppose he wanted to send a plaintext such as 
	- "gaul is divided into three parts"
- But he didn't want Brutus to read it. He shifted each letter backwards by three places, so d becomes A, e becomes B, f becomes C, ect. The beginning of the alphabey wrapped around to the end, so a became X, b became Y, and c became Z. The ciphertext was then:
	- "DXRIFPAFSFABAFKQLQROBBMXOQP"
- Decryption was accomplished by shifting forward by three spaces (and trying to figure out how to put the spaces back in).
$$
\begin{array}{ll}
\text{encrpytion: } x->x+k\ (mod\ 26)\\
\text{decrpytion: } x->x-k\ (mod\ 26)
\end{array}$$