/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antramir <antramir@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 16:35:24 by antramir          #+#    #+#             */
/*   Updated: 2022/05/31 11:41:52 by antramir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Iterates the 'lst' list and applies the 'f' function to the content of each node.
Create a resulting list of the correct and successive application of the function
'f' over each node. The 'del' function is used to remove the contents of a node, 
if necessary
*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*begin_newlst;

	if (!lst)
		return (NULL);
	newlst = ft_lstnew(f(lst->content));
	if (!newlst)
		return (NULL);
	begin_newlst = newlst;
	while (lst)
	{
		if (lst->next)
		{
			newlst->next = ft_lstnew(f(lst->next->content));
			if (!newlst->next)
			{
				ft_lstclear(&newlst, del);
				return (NULL);
			}
			newlst = newlst->next;
		}
		lst = lst->next;
	}
	newlst->next = NULL;
	return (begin_newlst);
}
