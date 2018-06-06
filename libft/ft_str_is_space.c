/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_space.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabouche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/01 15:45:41 by mabouche          #+#    #+#             */
/*   Updated: 2018/05/01 16:10:09 by mabouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_str_is_space(const char *s)
{
	unsigned int index;

	index = 0;
	while (s[index])
	{
		if (!(s[index] == ' ' || s[index] == '\t' || s[index] == '\n'))
			return (0);
		index++;
	}
	return (1);
}
