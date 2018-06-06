/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabouche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/01 14:27:39 by mabouche          #+#    #+#             */
/*   Updated: 2018/05/01 16:14:44 by mabouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *list;
	t_list *temp;

	list = *alst;
	while (list != NULL)
	{
		temp = list->next;
		del(list, list->content_size);
		list = temp;
	}
	*alst = NULL;
}
