/*Explain Structure with padding and non-padding?  */

structure padding:


By default any processor access the memory word by word.

For example, on 32-bit ARM processor memory will be accessed 4 bytes (1 word) at a time.

struct xyz
{
	int x;
	char y;
	float z;
};

result:12

without structure padding:


struct xyz
{
	int x;
	char y;
	float z;
};

result:9
