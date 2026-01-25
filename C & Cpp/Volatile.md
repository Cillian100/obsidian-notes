- Volatile is a type qualifier. 
- A variable is said to be volatile if its value can be read or modified asynchronously by something other than the current thread of execution.
- The value of a volatile variable may spontaneously change for reasons such as; sharing values with other threads; sharing values with asynchronous signal handlers, accessing hardware devices via memory-mapped I/O.

## Multi-Threading
- it is a common misconception that the volatile keyword is useful in portable multi-threading code in C.
- unlike Java and C# operations on volatile variables in C and C++ are not atomic, and operations on volatile variables do not have sufficient memory ordering guarantees
- most C and C++ compilers, linkers and runtime simply do not provide the necessary memory ordering guarantees to make the volatile keyword useful for any multi-threading scenarios

https://en.wikipedia.org/wiki/Volatile_(computer_programming)