/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabouche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/24 17:24:45 by mabouche          #+#    #+#             */
/*   Updated: 2018/04/25 16:14:53 by mabouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, const char *src)
{
	int index;
	int index2;

	index = 0;
	index2 = 0;
	while (dest[index])
		index++;
	while (src[index2])
	{
		dest[index] = src[index2];
		index++;
		index2++;
	}
	dest[index] = '\0';
	return (dest);
}
