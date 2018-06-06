/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabouche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/24 16:56:30 by mabouche          #+#    #+#             */
/*   Updated: 2018/05/01 19:39:58 by mabouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t len)
{
	unsigned int index;

	index = 0;
	while (src[index] && index < len)
	{
		dest[index] = src[index];
		index++;
	}
	while (index < len)
	{
		dest[index] = '\0';
		index++;
	}
	return (dest);
}
