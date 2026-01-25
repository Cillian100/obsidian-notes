- A 1D constitutional layer is a type of neural network layer that performs constitutional operations on one-dimensional data. 
	- unlike 2D convolutions that slide a kernel over a two dimensional input, 1D convolutions slide the kernel along a single spatial dimension.

#### How it Works:
- the layer uses a kernel (filter), a small matrix of learnable weights to extract features from the sequence 
- the kernel slides over the input sequence, performing a dot product at each position 
- the result of this operation is a transformed feature map, capturing patterns in the data 