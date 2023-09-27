/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrenzett <lrenzett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 19:37:15 by lrenzett          #+#    #+#             */
/*   Updated: 2023/07/24 19:02:27 by lrenzett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strdup(const char *str)
{
	char	*mal;
	size_t	len;

	len = ft_strlen(str) + 1;
	mal = (char *)malloc(len * sizeof(char));
	if (!mal)
		return (NULL);
	ft_strlcpy(mal, str, len);
	return (mal);
}
