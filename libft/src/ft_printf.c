/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrenzett <lrenzett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 17:57:53 by lrenzett          #+#    #+#             */
/*   Updated: 2023/09/20 02:17:35 by lrenzett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_case(va_list arg, char chr)
{
	int	len;

	len = 0;
	if (chr == '%')
		len += ft_putchar('%');
	else if (chr == 'c')
		len += ft_putchar(va_arg(arg, int));
	else if (chr == 's')
		len += ft_putstr(va_arg(arg, char *));
	else if (chr == 'd' || chr == 'i')
		len += ft_putnbr(va_arg(arg, int));
	else if (chr == 'u')
		len += ft_putuns(va_arg(arg, unsigned int));
	else if (chr == 'x')
		len += ft_puthexa(va_arg(arg, unsigned int), "0123456789abcdef");
	else if (chr == 'X')
		len += ft_puthexa(va_arg(arg, unsigned int), "0123456789ABCDEF");
	else if (chr == 'p')
	{
		len += ft_putstr("0x");
		len += ft_puthexa(va_arg(arg, unsigned long), "0123456789abcdef");
	}
	return (len);
}

int	ft_printf(const char *str, ...)
{
	va_list	arg;
	int		i;
	int		len;

	len = 0;
	i = 0;
	va_start(arg, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			len += ft_case(arg, str[i]);
		}
		else
		{
			write(1, &str[i], 1);
			len++;
		}
		i++;
	}
	va_end(arg);
	return (len);
}
