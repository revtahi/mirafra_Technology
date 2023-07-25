/* What is dynamic memory allocation and when it is used? */

The concept of dynamic memory allocation in c language enables the C programmer to allocate memory at runtime. Dynamic memory allocation in c language is possible by 4 functions of stdlib.h header file.
1)	malloc()
2)	calloc()
3)	realloc()
4)	free()
Before learning above functions, let's understand the difference between static memory allocation and dynamic memory allocation.

static memory allocation				dynamic memory allocation
memory is allocated at compile time.	  		memory is allocated at run time.
memory can't be increased while executing program.	memory can be increased while executing program.
used in array.						used in linked list.



he syntax of malloc() function is given below:

ptr=(cast-type*)malloc(byte-size)  

The syntax of calloc() function is given below:

ptr=(cast-type*)calloc(number, byte-size)  

ptr=realloc(ptr, new-size)  

Let's see the syntax of free() function.

free(ptr)  
