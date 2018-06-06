/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabouche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 13:50:39 by mabouche          #+#    #+#             */
/*   Updated: 2018/05/21 14:48:58 by mabouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int			my_read(int fd, char **str)
{
	int		ret;
	char	buf[BUFF_SIZE + 1];
	char	*temp;

	if ((ret = read(fd, buf, BUFF_SIZE)) == -1)
		return (-1);
	buf[ret] = '\0';
	temp = *str;
	*str = ft_strjoin(*str, buf);
	if (*str == NULL)
		*str = ft_strdup(buf);
	if (temp != 0)
		free(temp);
	return (ret);
}

static int			get_line(char **str, char **line)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = NULL;
	ptr = ft_strchr(*str, '\n');
	if (ptr == NULL)
		ptr = ft_strchr(*str, '\0');
	if (*str[0] != '\0')
	{
		while ((*str)[i] != (*ptr))
			i++;
		*line = ft_strsub(*str, 0, i);
		*str = (char *)ft_memmove(*str, *str + i + 1, ft_strlen(*str));
		return (1);
	}
	return (0);
}

int					get_next_line(const int fd, char **line)
{
	int				ret;
	static char		*str[INT_MAX];

	ret = 0;
	if (!line || BUFF_SIZE < 1 || fd == -1 || fd > INT_MAX)
		return (-1);
	while ((ret = my_read(fd, &str[fd])))
	{
		if (ret == -1)
			return (-1);
		ret = my_read(fd, &str[fd]);
	}
	return (get_line(&str[fd], line));
}
