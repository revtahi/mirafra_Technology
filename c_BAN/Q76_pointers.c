/*What is the difference? 
int const *p = &i;  
int * const p = &i; 
When do we use? */


//Int const *p = &i;  pointer to constant
//Int *const p = &i; constant pointer
//Const int* const p=&i; constant pointer to constant
	//constant to pointer

/*#include<stdio.h>
int main()
{
	int q=5;
	int *const ptr=&q;
	
	*ptr=22;
	printf("%d",*ptr);
	
	

}*/

	//pointer to constant

#include<stdio.h>
int main()
{
	const int q=5;
	int const *ptr=&q;
	
//	*ptr=22;
	const int q2=88;
	ptr=&q2;
	printf("%d",*ptr);
	
	

}
when do we use?

If it is not intended for a pointer variable that is passed as a parameter to a function to change its value, then declaring the pointer as constant acts as a check against accidental modifications.
We would use a "pointer to a constant" when you want to ensure that the value being pointed to cannot be modified, but you may need to change the pointer to point to a different value. You would use a "constant pointer" when you want to ensure that the pointer always points to the same location in memory, but you may need to modify the value being pointed to.


