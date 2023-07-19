/*Write a program using the below
_DATE_
_TIME_
_FILE_
_LINE_
_STDC_ */

#include<stdio.h>
int main()
{
	printf("Date is : %s\n",__DATE__);
	printf(" Time is : %s\n",__TIME__);
	printf("File name is : %s\n",__FILE__);
	printf("Line number is : %d\n",__LINE__);
	printf("Which standard supported : %d\n",__STDC__);


}
