

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int i;

	while (*str != 0)
	{
		i = 0;
		while (to_find != 0)
		{
			if (to_find[i] != str[i])
				break;
			i++;
		}
		if (to_find[i] == 0)
			break;
		str++;
	}
	return (str);
}
