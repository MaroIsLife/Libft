/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mougnou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 18:55:44 by mougnou           #+#    #+#             */
/*   Updated: 2019/11/03 22:30:26 by mougnou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*p;
	int		size;

	i = 0;
	size = ft_strlen(s1) + 1;
	p = malloc(size * sizeof(char));
	if (p == 0)
		return (NULL);
	while (i < size)
	{
		p[i] = s1[i];
		i++;
	}
	return (p);
}
