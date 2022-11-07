#include <stdio.h>

char *foo(void)
{
	char a = 'a';
	char *ptr = &a;

	return (ptr);
}

int main(void)
{
	char *tst = foo();

	printf("%c\n", *tst);
	printf("%c\n", *tst);
	printf("%c\n", *tst);
	printf("end of program\n");
	return (0);
}
