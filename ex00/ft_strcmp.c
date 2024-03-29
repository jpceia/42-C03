/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 20:49:19 by jceia             #+#    #+#             */
/*   Updated: 2020/11/30 20:54:51 by jceia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 > *s2)
			return (1);
		if (*s2 > *s1)
			return (-1);
		s1++;
		s2++;
	}
	if (*s1 > 0)
		return (1);
	if (*s2 > 0)
		return (-1);
	return (0);
}
