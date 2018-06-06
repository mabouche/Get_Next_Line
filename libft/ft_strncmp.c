/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabouche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/25 14:40:40 by mabouche          #+#    #+#             */
/*   Updated: 2018/04/26 14:43:24 by mabouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t size)
{
	unsigned int i;

	i = 0;
	if (size == 0)
		return (0);
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] && i < (size - 1))
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
