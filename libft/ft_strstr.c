/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabouche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/25 11:48:18 by mabouche          #+#    #+#             */
/*   Updated: 2018/05/01 20:04:25 by mabouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*rotation(const char *meule, const char *aiguille)
{
	int index;
	int index2;

	index = 0;
	index2 = 0;
	while (meule[index])
	{
		if ((meule[index] == aiguille[index2]) && (aiguille[index2] != '\0'))
		{
			while ((meule[index] == aiguille[index2]) && aiguille[index2])
			{
				index2++;
				index++;
			}
			if (aiguille[index2] == '\0')
				return ((char*)(&meule[index - ft_strlen(aiguille)]));
			else
			{
				index -= index2;
				index2 = 0;
			}
		}
		index++;
	}
	return (NULL);
}

char			*ft_strstr(const char *meule, const char *aiguille)
{
	if (ft_strncmp(aiguille, "", 1) == 0)
		return ((char *)meule);
	else
		return (rotation(meule, aiguille));
}
