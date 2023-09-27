/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrenzett <lrenzett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 19:13:25 by lrenzett          #+#    #+#             */
/*   Updated: 2023/07/24 19:02:41 by lrenzett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char	*d;
	char	*s;
	size_t	dlen;
	size_t	n;

	d = dst;
	s = (char *) src;
	n = size;
	while (n-- != 0 && *d != '\0')
		d++;
	dlen = d - dst;
	n = size - dlen;
	if (n == 0)
		return (dlen + ft_strlen((char *) src));
	while (*src != '\0')
	{
		if (n > 1)
		{
			*d++ = *src;
			n--;
		}
		src++;
	}
	*d = '\0';
	return (dlen + (src - s));
}
