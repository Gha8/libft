/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmohamed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 02:00:56 by gmohamed          #+#    #+#             */
/*   Updated: 2024/05/26 08:22:02 by gmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	ch;
	unsigned char	*ss;
	size_t			i;

	i = 0;
	ch = (unsigned char)c;
	ss = (unsigned char *)s;
	while (i < n)
	{
		if (*ss == ch)
			return ((void *)ss);
		i++;
		ss++;
	}
	return (NULL);
}
