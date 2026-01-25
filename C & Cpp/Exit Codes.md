- The purpose of the **exit()** code is to terminate the execution of the program.
	- the return 0 or EXIT_SUCCESS implies that the code has executed successfully without any errors.
	- exit code other than 0 indicates the presence of an error in the code.
	
- **exit(1):** indicates abnormal termination of a program as a result of a minor problem
- **exit(2):** indicates abnormal termination of a program as a result of a major problem
- **exit(127):** indicates a command not found 
- **exit(132):** indicates a program was aborted as a result of illegal instructions or that the binary is corrupt
- **exit(133):** indicates a program was aborted as a result of diving an integer by zero
- **exit(134):** indicates a program was aborted as a result of a failed assertion
- **exit(136):** indicates a program was aborted as a result of a floating point exception or integer overflow
- **exit(137):** indicates a program took up too much memory

https://www.geeksforgeeks.org/cpp/exit-codes-in-c-c-with-examples/