/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabouche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/28 17:38:00 by mabouche          #+#    #+#             */
/*   Updated: 2018/05/01 16:08:26 by mabouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_str_is_numeric(char *s)
{
	unsigned int index;

	index = 0;
	while (s[index])
	{
		if (!(s[index] > 47 && s[index] < 58))
			return (0);
		index++;
	}
	return (1);
}
