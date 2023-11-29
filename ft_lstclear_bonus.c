/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antramir <antramir@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 13:57:41 by antramir          #+#    #+#             */
/*   Updated: 2022/05/26 15:55:36 by antramir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Remove and free the given 'lst' node and all consecutive from that node, 
using the function 'del' and free(3). At the end, the pointer to the list 
must be NULL.
*/
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*nextlst;

	if (!lst)
		return ;
	while (*lst)
	{
		nextlst = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = nextlst;
	}
}
