/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmohamed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 23:17:20 by gmohamed          #+#    #+#             */
/*   Updated: 2024/05/21 23:48:43 by gmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	char			*s;

	s = (char *)src;
	if (size == 0)
		return (ft_strlen(s));
	if (!src || !dst)
		return (ft_strlen(s));
	i = 0;
	while (i < (size - 1) && s[i] != '\0')
	{
		dst[i] = s[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(s));
}
