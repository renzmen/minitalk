/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrenzett <lrenzett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 18:36:17 by lrenzett          #+#    #+#             */
/*   Updated: 2023/07/24 19:02:44 by lrenzett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && i < (size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = 0;
	}
	while (src[i])
		i++;
	return (i);
}
/*#include <stdio.h>
int main ()
{
	char dst[10] = "hello";
	char src[10] = "worlddd";
	char ppp[10] = "hello";
	char uuu[10] = "worlddd";
	printf("%s, %lu\n", dst, strlcpy(dst, src, 2));
	printf("%s, %lu\n", ppp, ft_strlcpy(ppp, uuu, 2));
}*/
