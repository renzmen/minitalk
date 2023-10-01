/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrenzett <lrenzett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 11:56:58 by lrenzett          #+#    #+#             */
/*   Updated: 2023/07/24 19:00:59 by lrenzett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*rnr1;
	unsigned char	*rnr2;

	rnr1 = (unsigned char *) s1;
	rnr2 = (unsigned char *) s2;
	if (n == 0)
		return (0);
	while (*rnr1 == *rnr2 && --n)
	{
		rnr1++;
		rnr2++;
	}
	return (*rnr1 - *rnr2);
}
/*#include <stdio.h>

int main (int ac, char **av)
{
    if (ac == 3)
        printf("%d", ft_strncmp(av[1], av[2], 5));
}*/
