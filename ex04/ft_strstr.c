/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 20:52:36 by jceia             #+#    #+#             */
/*   Updated: 2020/11/30 20:56:49 by jceia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	index;

	if (!to_find)
		return (str);
	while (*str)
	{
		index = 0;
		while (to_find[index] != 0)
		{
			if (to_find[index] != str[index])
				break ;
			index++;
		}
		if (to_find[index] == 0)
			return (str);
		str++;
	}
	return (0);
}
