/* 4. Write a C program to check if a string (case-sensitive) is a palindrome or not using a callback function.
   Expected Output:

String: Madam
Madam is not a palindrome (case-sensitive).
Madam is a palindrome (case-insensitive).

String: aba
aba is a palindrome (case-sensitive).
aba is a palindrome (case-insensitive).*/

#include <stdio.h>
#include <string.h>

int palindrome(char s[]);
int case_sensitive(int (*fptr)(char[]), char s[]);

int main() {
	char s[100];
	printf("Enter the string:\n");
	scanf("%s", s);

	int (*fptr)(char[]) = palindrome;
	int r = case_sensitive(fptr, s);
	if (r) 
	{
		printf("%s is a palindrome (case-sensitive).\n", s);
	} 
	else 
	{
		printf("%s is not a palindrome (case-sensitive).\n", s);
	}

	int l = strlen(s);
	for (int i = 0; i < l; i++) 
	{
		if (s[i] >= 'A' && s[i] <= 'Z') 
		{
			s[i] = s[i] + 32;
		}
	}

	int (*fptr2)(char[]) = palindrome;
	int g = case_sensitive(fptr2, s);
	if (g) 
	{
		printf("%s is a palindrome (case-insensitive).\n", s);
	} 
	else 
	{
		printf("%s is not a palindrome (case-insensitive).\n", s);
	}

	
}

int case_sensitive(int (*fptr)(char[]), char s[]) {
	return fptr(s);
}

int palindrome(char s[]) 
{
	int i, j, k = 0, l;
	l = strlen(s);

	for (i = 0, j = l - 1; i <= j / 2; i++, j--) 
	{
		if (s[i] == s[j]) 
		{
			k = 1;
		} 
		else 
		{
			k = 0;
			break;
		}
	}

	if (k == 1)
		return 1;
	else
		return 0;
}

