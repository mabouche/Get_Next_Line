/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabouche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/26 16:24:08 by mabouche          #+#    #+#             */
/*   Updated: 2018/04/26 16:24:09 by mabouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(const char *str, int fd)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		ft_putchar_fd(str[index], fd);
		index++;
	}
}
