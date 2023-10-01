/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrenzett <lrenzett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 17:59:37 by lrenzett          #+#    #+#             */
/*   Updated: 2023/07/24 19:03:03 by lrenzett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int	is_substring(char *str, const char *sub, size_t len)
{
	while (*sub && len-- > 0)
		if (*str++ != *sub++)
			return (0);
	if (*sub)
		return (0);
	return (1);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*runner;

	runner = (char *)haystack;
	if (*needle == '\0' || needle == NULL)
		return (runner);
	if (len == 0)
		return (NULL);
	while (*runner && len)
	{
		if (*runner == *needle && is_substring(runner, needle, len))
			return (runner);
		runner++;
		len--;
	}
	return (0);
}
