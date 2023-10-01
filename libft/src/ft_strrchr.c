/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrenzett <lrenzett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 18:47:59 by lrenzett          #+#    #+#             */
/*   Updated: 2023/07/24 19:03:05 by lrenzett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strrchr(const char *str, int c)
{
	const char	*last;

	last = 0;
	while (*str)
	{
		if (*str == (char) c)
			last = str;
		str++;
	}
	if (*str == (char) c)
		return ((char *)str);
	return ((char *)last);
}
