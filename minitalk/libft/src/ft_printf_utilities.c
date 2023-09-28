/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utilities.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrenzett <lrenzett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 21:41:48 by lrenzett          #+#    #+#             */
/*   Updated: 2023/09/20 02:18:19 by lrenzett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	len;

	len = 0;
	if (!str)
		return (len += ft_putstr("(null)"));
	while (str[len])
		len += ft_putchar(str[len]);
	return (len);
}

int	ft_puthexa(unsigned long n, char *hex)
{
	int	len;

	len = 0;
	if (n > 15)
		len += ft_puthexa(n / 16, hex);
	len += ft_putchar(hex[n % 16]);
	return (len);
}

int	ft_putuns(unsigned int nbr)
{
	int	len;

	len = 0;
	if (nbr > 9)
		len += ft_putuns(nbr / 10);
	len += ft_putchar((nbr % 10) + 48);
	return (len);
}

int	ft_putnbr(int nbr)
{
	int	len;

	len = 0;
	if (nbr == -2147483648)
		return (len += ft_putstr("-2147483648"));
	if (nbr < 0)
	{
		len += ft_putchar('-');
		nbr *= -1;
	}
	if (nbr > 9)
		len += ft_putnbr(nbr / 10);
	len += ft_putchar((nbr % 10) + 48);
	return (len);
}
