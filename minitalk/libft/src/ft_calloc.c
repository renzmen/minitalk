/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrenzett <lrenzett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 20:04:05 by lrenzett          #+#    #+#             */
/*   Updated: 2023/07/27 17:24:51 by lrenzett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*cal;
	size_t	tot;

	if (count + size < count || count + size < size)
		return (NULL);
	tot = count * size;
	cal = malloc(tot);
	if (!cal)
		return (NULL);
	ft_bzero(cal, tot);
	return (cal);
}
