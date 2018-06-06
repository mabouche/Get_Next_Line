/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabouche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/24 17:40:51 by mabouche          #+#    #+#             */
/*   Updated: 2018/04/25 16:20:14 by mabouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	unsigned int index;
	unsigned int index2;

	index = 0;
	index2 = 0;
	while (dest[index])
		index++;
	while (src[index2] && index2 < n)
	{
		dest[index] = src[index2];
		index++;
		index2++;
	}
	dest[index] = '\0';
	return (dest);
}
