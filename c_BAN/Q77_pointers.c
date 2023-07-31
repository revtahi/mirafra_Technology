/*How do you define and when do we use? 
Constant integer 
Constant pointer to integer 
Constant pointer to constant integer */

			// constant integer

//A constant integer is an integer value that cannot be modified once it is assigned a value. To define a constant integer, you use the const keyword before the data type during declaration.
// For example:

 const int a=10;

			//When do we use?

Constant integers are commonly used to define fixed values that should not be modified, such as mathematical constants (e.g., pi), configuration settings, or any other value that should remain constant throughout the program's execution.

		### Constant pointer to integer ###
A constant pointer to an integer is a pointer that points to an integer value, and once it is initialized to point to a memory location, it cannot be changed to point to another location. However, the value at the memory location can still be modified. To define a constant pointer to an integer, you use the const keyword after the * during declaration. 

For example:
 
int a=5;
const int *p=&a;

//		###when do we use?#####

Constant pointers to integers are useful when you want to create a pointer that points to an integer value, and you don't want the pointer to be accidentally modified to point elsewhere. This is helpful when passing pointers to functions, where you want to ensure the function doesn't modify the original value.

		####Constant Pointer to Constant Integer####

A constant pointer to a constant integer is a pointer that both cannot be changed to point to another memory location, and the value at the memory location cannot be modified through that pointer. To define a constant pointer to a constant integer, you use the const keyword both before and after the * during declaration. 

For example:

int a = 5;
const int *const p = &a;
Here, p is a constant pointer to a constant integer, and you cannot modify the value it points to, nor can you make it point to another location.
			//when do we use?

 Constant pointers to constant integers are useful when you want to create a read-only reference to a fixed integer value, like when working with hardware registers or other constants that should not be modified.







