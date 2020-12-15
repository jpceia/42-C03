/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 20:53:29 by jceia             #+#    #+#             */
/*   Updated: 2020/12/15 13:17:27 by jceia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int nb)
{
	char			*dest_ptr;
	char			*src_start;
	unsigned int	dest_len;
	unsigned int	remaing;

	dest_ptr = dest;
	src_start = src;
	remaing = nb;
	while (remaing-- != 0 && *dest_ptr != '\0')
		dest_ptr++;
	dest_len = dest_ptr - dest;
	remaing = nb - dest_len;
	if (remaing == 0)
		return (dest_len + ft_strlen(src));
	while (*src != '\0')
	{
		if (remaing > 1)
		{
			*dest_ptr++ = *src;
			remaing--;
		}
		src++;
	}
	*dest_ptr = '\0';
	return (dest_len + (src - src_start));
}

