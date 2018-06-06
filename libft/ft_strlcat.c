/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabouche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/24 18:42:10 by mabouche          #+#    #+#             */
/*   Updated: 2018/04/26 14:38:51 by mabouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned long	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned long src_size;
	unsigned long dest_size;
	unsigned long index;
	unsigned long index2;

	src_size = ft_strlen(src);
	dest_size = ft_strlen(dest);
	index = 0;
	index2 = 0;
	if (size <= dest_size)
	{
		return (src_size + size);
	}
	while (dest[index] && index < size - 1)
		index++;
	while (index < size - 1 && src[index2])
	{
		dest[index] = src[index2];
		index++;
		src++;
	}
	dest[index] = '\0';
	return (src_size + dest_size);
}
