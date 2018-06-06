/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabouche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/27 11:11:09 by mabouche          #+#    #+#             */
/*   Updated: 2018/05/01 20:17:16 by mabouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		get_size(char const *s)
{
	unsigned int				compteur;
	unsigned int				index;

	compteur = 0;
	index = 0;
	while (ft_isspace(s[index]) == 1)
	{
		compteur++;
		index++;
	}
	if (compteur == ft_strlen(s))
		return (0);
	index = ft_strlen(s);
	while (ft_isspace(s[index - 1]) == 1)
	{
		index--;
		compteur++;
	}
	return (compteur);
}

char			*ft_strtrim(char const *s)
{
	unsigned int	index;
	unsigned int	size;
	char			*dest;
	unsigned int	index3;

	index = 0;
	index3 = 0;
	dest = "";
	if (!s)
		return (NULL);
	size = ft_strlen(s) - get_size(s);
	dest = (char *)malloc(sizeof(char) * (size + 1));
	if (dest == NULL)
		return (NULL);
	while (ft_isspace(s[index]) == 1)
		index++;
	while (index3 < size)
	{
		dest[index3] = s[index];
		index++;
		index3++;
	}
	dest[index3] = '\0';
	return (dest);
}
