/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmohamed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 13:49:10 by gmohamed          #+#    #+#             */
/*   Updated: 2024/05/26 04:03:06 by gmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_words(char const *s, char c)
{
	size_t	words;
	size_t	i;

	words = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			words++;
		i++;
	}
	return (words);
}

static	void	ft_free(char **tab)
{
	int	i;

	i = 0;
	if (!tab)
		return ;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

static int	set_mem(char **tab, char const *s, char c)
{
	char const	*d;
	size_t		i;

	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		d = s;
		while (*d && *d != c)
			d++;
		if (d > s)
		{
			tab[i] = ft_substr(s, 0, d - s);
			if (!tab[i])
			{
				ft_free(tab);
				return (-1);
			}
			i++;
		}
		s = d;
	}
	tab[i] = 0;
	return (0);
}

char	**ft_split(char const *s, char c)
{
	size_t	words;
	char	**tab;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	tab = malloc(sizeof(char *) * (words + 1));
	if (!tab || set_mem(tab, s, c) == -1)
		return (NULL);
	return (tab);
}
