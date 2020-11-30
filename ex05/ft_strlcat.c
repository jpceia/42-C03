

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int dest_len;
	int i;

	dest_len = 0;
	while(dest[dest_len] != 0)
		dest_len++;
	i = 0;
	while(src[i] != 0 && i < nb)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
