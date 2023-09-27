/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrenzett <lrenzett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 16:50:01 by lrenzett          #+#    #+#             */
/*   Updated: 2023/07/24 19:02:38 by lrenzett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	len;
	char	*mal;
	char	*runner;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	mal = (char *)malloc((len + 1) * sizeof(char));
	if (!mal)
		return (NULL);
	runner = mal;
	while (*s1)
		*runner++ = *(char *)s1++;
	while (*s2)
		*runner++ = *(char *)s2++;
	*runner = '\0';
	return (mal);
}
