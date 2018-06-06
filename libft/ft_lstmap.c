/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabouche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/01 14:57:37 by mabouche          #+#    #+#             */
/*   Updated: 2018/05/01 16:16:35 by mabouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *dest;
	t_list *start;

	dest = f(lst);
	start = dest;
	while (lst->next != NULL)
	{
		dest->next = f(lst->next);
		dest = dest->next;
		lst = lst->next;
	}
	return (start);
}
