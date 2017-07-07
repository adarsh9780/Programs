#include <stdio.h>
void strcpy1(char *s, char *t);

int main(void)
{
	char *a = "i am adarsh";
	char *b = "oops";
	// strcpy1(*b, *a);
	// printf("%s", b);
	printf("%c\n", b);
	return 0;
}

void strcpy1(char *s, char *t)
{
	while(*s++ == *t++)
		;
}