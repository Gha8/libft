/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmohamed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 19:33:09 by gmohamed          #+#    #+#             */
/*   Updated: 2024/05/22 19:50:46 by gmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*l;
	char	*b;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	b = (char *) big;
	l = (char *) little;
	if (l[i] == '\0')
		return (b);
	if (len == 0)
		return (NULL);
	while (b[i] != '\0' && i < len)
	{
		while (b[i + j] == l[j] && i + j < len)
		{
			if (l[j + 1] == '\0')
				return (&b[i]);
			j++;
		}
		j = 0;
		i++;
	}
	return (NULL);
}
