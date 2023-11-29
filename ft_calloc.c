/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antramir <antramir@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 09:50:33 by antramir          #+#    #+#             */
/*   Updated: 2022/04/28 15:03:01 by antramir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
The calloc() function shall allocate unused space for an array of
nelem elements each of whose size in bytes is elsize.  The space
shall be initialized to all bits 0.
*/
void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	total_size;			

	total_size = count * size;
	ptr = malloc(total_size);
	if ((count == __SIZE_MAX__ && size > 0)
		|| (size == __SIZE_MAX__ && count > 0))
		return (NULL);
	if (ptr == NULL)
		return (ptr);
	ft_bzero(ptr, total_size);
	return (ptr);
}
