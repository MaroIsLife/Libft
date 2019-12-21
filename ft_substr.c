/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mougnou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 16:18:03 by mougnou           #+#    #+#             */
/*   Updated: 2019/11/02 13:38:20 by mougnou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	char		*s1;
	size_t		size;
	size_t		c;

	if (s == 0)
		return (0);
	if (start > ft_strlen(s))
		len = 0;
	i = 0;
	size = len + 1;
	s1 = malloc(size * sizeof(char));
	if (s1 == NULL)
		return (NULL);
	c = start;
	while (s[i] != '\0' && i < len)
	{
		s1[i] = s[c];
		i++;
		c++;
	}
	s1[i] = '\0';
	return (s1);
}
