/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabouche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/24 19:58:07 by mabouche          #+#    #+#             */
/*   Updated: 2018/05/04 15:14:27 by mabouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int index;
	int posneg;
	int res;

	index = 0;
	posneg = 1;
	res = 0;
	while (ft_isspace(str[index]) == 1)
		index++;
	if (str[index] == 45)
		posneg = -1;
	if (str[index] == 45 || str[index] == 43)
		index++;
	while (ft_isdigit(str[index]) == 1)
	{
		res = res * 10 + str[index] - 48;
		index++;
	}
	return (res * posneg);
}
