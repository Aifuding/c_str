
void mystrcpy(char *str,const char *dst)
{
	while(*dst != '\0')
	{
		*str = *dst;
		dst++;
		str++;
	}
	*str = '\0';
}
