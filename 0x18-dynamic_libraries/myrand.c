#include <stdio.h>

int rand(void)
{
	static int rc = 0;
	int num_arr[] = {9, 8, 10, 24, 75, 9};
	int num  = 0;
	num = num_arr[rc];
	rc++;
	printf("%d\n", num);
	return (num);
}
