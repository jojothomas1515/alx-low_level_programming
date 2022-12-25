#include "main.h"

/**
 * rot13 - encodes str with rot encryption
 * @str: target string to be encrypted
 * Return: memory address of the string
 */

char *rot13(char *str)
{
	int i, j;
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char encoder[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; alpha[j] != '\0'; j++)
		{
			if (str[i] == alpha[j])
			{
				str[i] = encoder[j];
				break;
			}
		}
	}
	return (str);
}
