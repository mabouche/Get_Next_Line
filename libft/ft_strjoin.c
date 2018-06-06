/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabouche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/26 16:29:37 by mabouche          #+#    #+#             */
/*   Updated: 2018/04/28 14:35:48 by mabouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	total_size;
	char			*dest;

	if (!s1 || !s2)
		return (NULL);
	total_size = ft_strlen(s1) + ft_strlen(s2) + 1;
	dest = (char *)(malloc(sizeof(s1) * total_size));
	if (!dest)
		return (NULL);
	else
	{
		ft_strncpy(dest, s1, ft_strlen(s1));
		ft_strcpy(&dest[ft_strlen(s1)], s2);
	}
	return (dest);
}
