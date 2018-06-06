/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabouche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/26 16:56:06 by mabouche          #+#    #+#             */
/*   Updated: 2018/04/28 14:20:30 by mabouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char *dest;

	dest = malloc(size);
	if (!(dest))
		return (NULL);
	else
	{
		ft_memset(dest, 0, size);
		return (dest);
	}
}
