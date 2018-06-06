/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabouche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/25 19:05:48 by mabouche          #+#    #+#             */
/*   Updated: 2018/04/25 19:25:32 by mabouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned int	index;

	index = 0;
	while (index < n)
	{
		((unsigned char *)dest)[index] = ((unsigned char *)src)[index];
		if (((unsigned char *)src)[index] == (unsigned char)c)
			return (&dest[index + 1]);
		index++;
	}
	return (0);
}
