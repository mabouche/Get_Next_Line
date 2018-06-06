/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabouche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/27 16:30:54 by mabouche          #+#    #+#             */
/*   Updated: 2018/05/01 20:16:03 by mabouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		**init(char const *s, char **dest)
{
	if (s == NULL)
		return (NULL);
	dest = (char **)ft_memalloc(sizeof(s) * ft_strlen(s));
	if (dest == NULL)
		return (NULL);
	return (dest);
}

char			**ft_strsplit(char const *s, char c)
{
	unsigned int	i;
	unsigned int	t;
	unsigned int	count;
	char			**dest;

	dest = NULL;
	if ((dest = init(s, dest)) == NULL)
		return (NULL);
	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			t = 0;
			while ((s[i + t] != c) && (s[i + t]))
				t++;
			dest[count++] = ft_strsub(s, i, t);
			i = i + t;
		}
	}
	dest[count] = 0;
	return (dest);
}
