/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antramir <antramir@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 13:40:51 by antramir          #+#    #+#             */
/*   Updated: 2022/05/17 23:21:58 by antramir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
The memmove() function copies n bytes from memory area src to memory area dest.  
The memory areas may overlap: copying takes place as though the bytes in src 
are first copied into a temporary array that does not overlap src or dest, and 
the bytes are then copied from the temporary array to dest.
*/
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*sr;
	unsigned char	*ds;

	if (!dest && !src)
		return (NULL);
	sr = (unsigned char *) src;
	ds = (unsigned char *) dest;
	i = 0;
	if (sr < ds)
		while (n--)
			ds[n] = sr[n];
	else
	{
		while (i < n)
		{
			ds[i] = sr[i];
			i++;
		}
	}
	return (dest);
}
