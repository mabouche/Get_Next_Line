/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabouche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/26 16:47:38 by mabouche          #+#    #+#             */
/*   Updated: 2018/04/28 14:34:53 by mabouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*dest;
	unsigned int	index;
	unsigned int	dest_index;
	unsigned int	source_len;

	if (!s)
		return (NULL);
	index = start;
	dest_index = 0;
	source_len = ft_strlen(s);
	if (source_len < start)
		return (NULL);
	dest = (char *)malloc(sizeof(char) * len + 1);
	if (!dest)
		return (NULL);
	while (s[index] && index < (len + start))
	{
		dest[dest_index] = s[index];
		index++;
		dest_index++;
	}
	dest[dest_index] = '\0';
	return (dest);
}
