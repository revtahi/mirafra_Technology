#include <stdio.h>
#define YEARS_OLD 12

int main()
{
   #ifdef YEARS_OLD 
   #undef YEARS_OLD
   #define YEARS_OLD 485
   printf("Bengaluru is %d years old\n", YEARS_OLD);
   #endif
   return 0;
}
/*What is age of Bangalore?*/
