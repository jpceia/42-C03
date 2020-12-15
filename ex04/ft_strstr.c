/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 20:52:36 by jceia             #+#    #+#             */
/*   Updated: 2020/12/15 12:48:58 by jceia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*str_cpy;
	char	*to_find_cpy;

	if (*to_find == '\0')
		return (str);
	str_cpy = str;
	to_find_cpy = to_find;
	while (1)
	{
		if (*to_find_cpy == '\0')
			return (str_cpy - (to_find_cpy - to_find));
		if (*str_cpy == *to_find_cpy)
			to_find_cpy++;
		else
			to_find_cpy = to_find;
		if (str_cpy == '\0')
			break ;
		str_cpy++;
	}
	return (0);
}
