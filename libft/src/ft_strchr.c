/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrenzett <lrenzett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 21:09:48 by lrenzett          #+#    #+#             */
/*   Updated: 2023/07/24 19:02:22 by lrenzett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	*runner;

	runner = (char *)str;
	while (*runner)
	{
		if (*runner == (char) c)
			return ((char *)runner);
		runner++;
	}
	if (*runner == (char) c)
		return ((char *)runner);
	return (NULL);
}
