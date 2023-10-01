/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrenzett <lrenzett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 15:57:41 by lrenzett          #+#    #+#             */
/*   Updated: 2023/07/24 19:02:17 by lrenzett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static size_t	n_word(const char *s, char c)
{
	size_t	word;

	word = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		while (*s && *s != c)
		{
			s++;
			if (*s == c || *s == 0)
				word++;
		}
	}
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	char	**run;
	int		len;

	if (!s)
		return (0);
	split = malloc(sizeof(char *) * (n_word(s, c) + 1));
	if (!split)
		return (0);
	run = split;
	while (*s)
	{
		if (*s && *s == c)
			++s;
		len = 0;
		while (*s && *s != c)
		{
			len++;
			if (*(s + 1) == c || *(s + 1) == '\0')
				*run++ = ft_substr(s - len + 1, 0, len);
			s++;
		}
	}
	*run = 0;
	return (split);
}
