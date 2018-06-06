/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabouche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/27 14:18:29 by mabouche          #+#    #+#             */
/*   Updated: 2018/05/01 20:15:06 by mabouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
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
		dest[index] = (*f)(s[index]);
		index++;
	}
	dest[index] = '\0';
	return (dest);
}
