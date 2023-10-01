/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrenzett <lrenzett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 16:09:12 by lrenzett          #+#    #+#             */
/*   Updated: 2023/07/24 19:00:56 by lrenzett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*runner;

	runner = (unsigned char *) s;
	while (n--)
	{
		if (*runner == (unsigned char)c)
			return ((void *)runner);
		runner++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>
int main ()
{
    printf("%s", memchr("poocatroia",'r', 6));
}*/
