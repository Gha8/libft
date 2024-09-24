/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmohamed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 00:33:26 by gmohamed          #+#    #+#             */
/*   Updated: 2024/05/22 00:33:34 by gmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	char			*str;
	unsigned char	chr;

	str = (char *) s;
	chr = (unsigned char) c;
	i = 0;
	while (str[i] != '\0')
		i++;
	while (i--)
	{
		if (str[i] == chr)
			return (&str[i]);
	}
	if (!chr)
		return (&str[ft_strlen(s)]);
	return (NULL);
}
