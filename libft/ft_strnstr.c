/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabouche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/25 14:19:36 by mabouche          #+#    #+#             */
/*   Updated: 2018/05/01 20:12:43 by mabouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*rotation(const char *meule, const char *aiguille, size_t len)
{
	unsigned int i;
	unsigned int i2;

	i = 0;
	i2 = 0;
	while (meule[i])
	{
		if ((meule[i] == aiguille[i2]) && (aiguille[i2] != '\0'))
		{
			while ((meule[i] == aiguille[i2]) && aiguille[i2] && i < len)
			{
				i2++;
				i++;
			}
			if (aiguille[i2] == '\0')
				return ((char*)(&meule[i - ft_strlen(aiguille)]));
			else
			{
				i -= i2;
				i2 = 0;
			}
		}
		i++;
	}
	return (NULL);
}

char			*ft_strnstr(const char *meule,
		const char *aiguille, size_t len)
{
	if (ft_strncmp(aiguille, "", 1) == 0)
		return ((char *)meule);
	else
		return (rotation(meule, aiguille, len));
}
