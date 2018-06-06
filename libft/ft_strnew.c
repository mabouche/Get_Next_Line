/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabouche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/27 10:49:07 by mabouche          #+#    #+#             */
/*   Updated: 2018/04/28 14:22:36 by mabouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *dest;

	dest = (char *)malloc(size + 1);
	if (!dest)
		return (NULL);
	else
	{
		ft_memset(dest, (int)'\0', size + 1);
		return (dest);
	}
}
