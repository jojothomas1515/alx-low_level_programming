#include "main.h"

int main(void)
{
	char *name = "Jojo Thomas!";

	int len = _strlen(name);
	printf("%d\n", len);
	printf("%s\n", name);
	rev_string(name);
	printf("%s\n", name);
}