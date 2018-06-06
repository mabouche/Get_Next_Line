/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabouche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/25 12:39:31 by mabouche          #+#    #+#             */
/*   Updated: 2018/04/26 14:39:57 by mabouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int index;

	index = ft_strlen(s);
	if (c == '\0')
		return ((char *)(&s[index]));
	index--;
	while (s[index] != s[0])
	{
		if (s[index] == c)
			return ((char *)(&s[index]));
		index--;
	}
	if (s[index] == c)
		return ((char *)(&s[index]));
	else
		return (NULL);
}
