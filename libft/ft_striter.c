/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabouche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/26 15:21:33 by mabouche          #+#    #+#             */
/*   Updated: 2018/04/28 14:25:34 by mabouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	int index;

	index = 0;
	if (s == NULL || f == NULL)
		return ;
	while (s[index])
	{
		(*f)(&s[index]);
		index++;
	}
}
