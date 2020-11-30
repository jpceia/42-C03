

char	*ft_strcat(char *dest, char *src)
{
	int n;
	int i;

	n = 0;
	while(dest[n] != 0)
	{
		n++;
	}
	i = 0;
	while(src[i] != 0)
	{
		dest[n + i] = src[i];
		i++;
	}
	dest[n + i] = '\0';
	return (dest);
}
