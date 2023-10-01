/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrenzett <lrenzett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 17:59:21 by lrenzett          #+#    #+#             */
/*   Updated: 2023/07/24 19:00:16 by lrenzett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	lenght(int n, int base)
{
	int	count;

	count = 0;
	if (n < 0)
		count++;
	while (n && ++count)
		n /= base;
	return (count);
}

void	conversion(char *dst, unsigned int n)
{
	if (n < 10)
		*dst = n + '0';
	else
	{
		*dst = n % 10 + '0';
		conversion(dst - 1, n / 10);
	}
}

char	*ft_itoa(int n)
{
	char		*str;
	int			len;
	long int	nb;

	len = lenght(n, 10);
	nb = n;
	if (n == 0)
		return (ft_strdup("0"));
	str = (char *)malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	if (nb < 0)
	{
		nb = -nb;
		str[0] = '-';
	}
	str[len] = '\0';
	conversion(str + len - 1, nb);
	return (str);
}
