/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 20:50:23 by jceia             #+#    #+#             */
/*   Updated: 2020/11/30 20:55:18 by jceia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int index;

	index = 0;
	while ((index < n) && s1[index] && (s1[index] == s2[index]))
		index++;
	if (index == n)
		return (0);
	if (s1[index] > s2[index])
		return (1);
	if (s2[index] > s1[index])
		return (-1);
}
