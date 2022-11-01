#include "main.h"

int main(void)
{
	char *s = "jojo thomas";
	int i, j = i = 0;

	printf("%s\n", s);
	while (j < 3)
	{
		i = 0;
		while (i < 4)
		{
			s++;
			i++;
		}
		j++;
	}
	printf("%s\n", s);


	return (0);
}
