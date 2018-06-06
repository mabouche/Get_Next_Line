/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabouche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/25 20:27:39 by mabouche          #+#    #+#             */
/*   Updated: 2018/05/01 16:18:16 by mabouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char		*t1;
	const unsigned char		*t2;
	unsigned int			index;

	t1 = s1;
	t2 = s2;
	index = 0;
	if (n == 0 || t1 == t2)
		return (0);
	while (n > 0)
	{
		if (t1[index] != t2[index])
			return (t1[index] - t2[index]);
		if (n)
		{
			index++;
			n--;
		}
	}
	return (0);
}
