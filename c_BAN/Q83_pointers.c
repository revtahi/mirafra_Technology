/* What is the difference between an uninitialized pointer and a null pointer?*/

Uninitialized Pointer: Points to an unpredictable memory address, and dereferencing it without initializing it first leads to undefined behavior.
For example:

int *Ptr; // Declared but not assigned any value



Null Pointer: Points to nothing, and dereferencing it directly will result in a runtime error or crash, making it safer to use compared to uninitialized pointers.
For example:

int *ptr=NULL;

