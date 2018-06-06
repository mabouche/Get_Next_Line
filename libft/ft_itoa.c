/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabouche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/27 14:38:16 by mabouche          #+#    #+#             */
/*   Updated: 2018/05/01 20:17:47 by mabouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			get_len(int n)
{
	int len;

	len = 1;
	if (n < 0)
	{
		len++;
		n = -n;
	}
	while (n > 9)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static char			*fill_str(char *str, int n, int len, int posneg)
{
	while (len >= 0)
	{
		str[len] = (n % 10) + 48;
		n = n / 10;
		len--;
	}
	if (posneg < 0)
		str[0] = '-';
	return (str);
}

char				*ft_itoa(int n)
{
	char	*dest;
	int		len;
	int		posneg;

	posneg = n;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = get_len(n);
	dest = (char *)malloc(sizeof(char) * len + 1);
	if (dest == NULL)
		return (NULL);
	dest[len] = '\0';
	len--;
	if (n < 0)
		n = -n;
	return (fill_str(dest, n, len, posneg));
}
