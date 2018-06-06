/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabouche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/28 17:31:59 by mabouche          #+#    #+#             */
/*   Updated: 2018/05/01 16:10:33 by mabouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_str_is_alpha(char *s)
{
	unsigned int index;

	index = 0;
	while (s[index])
	{
		if (!((s[index] > 64 && s[index] < 91) ||
			(s[index] > 96 && s[index] < 123)))
			return (0);
		index++;
	}
	return (1);
}
