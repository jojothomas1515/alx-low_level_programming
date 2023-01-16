#include "../main.h"


int test1(void)
{
	char arr[] = "jojo thomas";
	int i = 0;

	while (arr[i])
	{
		_putchar(arr[i]);
		i++;
	}
	return (i);
}

int main(void)
{
	return (test1());
}
