/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mougnou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 21:54:07 by mougnou           #+#    #+#             */
/*   Updated: 2019/10/31 16:42:28 by mougnou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *dst, char const *src)
{
	char	*p;
	int		size;
	int		b;
	int		i;

	if (dst == 0 || src == 0)
		return (0);
	i = 0;
	size = ft_strlen((char *)dst) + ft_strlen((char *)src) + 1;
	if (!(p = malloc(size * sizeof(char))))
		return (NULL);
	while (dst[i] != '\0')
	{
		p[i] = dst[i];
		i++;
	}
	b = 0;
	while (src[b] != '\0')
	{
		p[i] = src[b];
		i++;
		b++;
	}
	p[i] = '\0';
	return (p);
}
