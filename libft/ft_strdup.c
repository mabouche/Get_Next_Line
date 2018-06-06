/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabouche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/23 18:52:38 by mabouche          #+#    #+#             */
/*   Updated: 2018/04/25 16:27:29 by mabouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *src)
{
	char				*dest;
	unsigned int		index;

	index = 0;
	dest = (char *)malloc(sizeof(*src) * ft_strlen(src) + 1);
	if (dest == NULL)
		return (0);
	while (index < ft_strlen(src))
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}
