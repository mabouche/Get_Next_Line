/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabouche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/25 11:11:53 by mabouche          #+#    #+#             */
/*   Updated: 2018/04/25 16:15:38 by mabouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int index;

	index = 0;
	while (s[index])
	{
		if (s[index] == c)
			return ((char *)(&s[index]));
		index++;
	}
	if (s[index] == c)
		return ((char *)(&s[index]));
	return (NULL);
}
