#include "../main.h"

int main(void)
{
	char c1 = 'A';
	char c2 = 'b';

	printf("the char %c is %s\n", c1, _islower(c1) ? "lower" : "not lower");

	printf("the char %c is %s\n", c2, _islower(c2) ? "lower" : "not lower");
	return (0);
}
