/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabouche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/27 14:33:53 by mabouche          #+#    #+#             */
/*   Updated: 2018/04/28 14:30:27 by mabouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*dest;
	unsigned int	index;

	if (s == NULL || f == NULL)
		return (NULL);
	index = 0;
	dest = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (dest == NULL)
		return (NULL);
	while (s[index])
	{
		dest[index] = (*f)(index, s[index]);
		index++;
	}
	dest[index] = '\0';
	return (dest);
}
