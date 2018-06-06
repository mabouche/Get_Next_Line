/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabouche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/25 18:57:02 by mabouche          #+#    #+#             */
/*   Updated: 2018/04/25 19:26:44 by mabouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;
	unsigned char	tmp_c;

	i = 0;
	ptr = (unsigned char *)s;
	tmp_c = (unsigned char)c;
	while (n--)
	{
		if (ptr[i] == tmp_c)
			return (ptr + i);
		i++;
	}
	return (NULL);
}
