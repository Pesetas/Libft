/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antramir <antramir@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 11:58:44 by antramir          #+#    #+#             */
/*   Updated: 2022/05/12 17:30:43 by antramir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
The memcpy() function copies n bytes from memory area src to memory 
area dest. The memory areas must not overlap.  Use memmove(3) if the memory 
areas do overlap.
*/
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	ptr1 = (unsigned char *) src;
	ptr2 = (unsigned char *) dest;
	i = 0;
	while (i < n && (dest != (void *) '\0' || src != (void *) '\0'))
	{
		ptr2[i] = ptr1[i];
		i++;
	}
	return (ptr2);
}
