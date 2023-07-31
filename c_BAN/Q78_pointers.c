/* What are function pointers and when do we use it? */

A function pointer is a pointer variable that can hold the address of a function. Binary codes of the 
Functions are stored in code segment. So base address of the function can be retrieved by just accessing 
the function name without parenthesis.
Function pointer declaration:
A function pointer must to be declared along with the function’s return type and its arguments 
data type list. A function pointer is capable of holding the address of functions, whose return type and 
argument’s match with its own declaration.

 <dt> (* fun)(type1,type2…);
 fun is a pointer, that can hold the address of a function with the given declaration.
 Address of a function can be assigned just by assigning the name of the function or by using & 
operator
int (*fun)(int,int);
If(ch == ‘+’)
fun = add; //int add (int,int);
Else if(ch == ‘-’)
fun =&sub; //int sub(int,int);


Function can be invoked by using function pointer name in place of function name, in a function 
call, or by using indirection operator
add(a,b); // direct call
fun(add); // using function pointer
(*fun)(a,b); // using function pointer with indirection operator
