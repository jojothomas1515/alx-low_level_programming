#include <stdio.h>

int print(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	printf("%d\n", nb);
	printf("%d", nb + print(nb - 1));
	printf(" %d\n", nb);

	nb --;
	return (nb);
}

int main(void)
{
	print(4);
	return (0);
}
