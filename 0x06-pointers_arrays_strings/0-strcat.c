char *_strcat(char *dest, char *src)
{
	int c;
	for (c = 0; *dest != '\0'; c++)
		dest++;
	dest--;

	for (c = 0; *src != '\0'; c++)
		*dest = *src;

	*dest = '\0';
}