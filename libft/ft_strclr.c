/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabouche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/26 15:06:11 by mabouche          #+#    #+#             */
/*   Updated: 2018/04/28 14:25:15 by mabouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strclr(char *s)
{
	unsigned int index;

	if (s == NULL)
		return ;
	index = 0;
	while (s[index])
	{
		s[index] = '\0';
		index++;
	}
}
