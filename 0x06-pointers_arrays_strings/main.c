//
// Created by Jojo Thomas on 10/27/2022.
//
#include "main.h"

int main(void)
{
	char str[90] = "hello ";
	char *str2 = "Worlds";

	char *ptr = _strcat(str, str2);

	printf("%s \n",str);
	return (0);
}