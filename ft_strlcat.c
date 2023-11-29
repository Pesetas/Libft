/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antramir <antramir@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 17:55:30 by antramir          #+#    #+#             */
/*   Updated: 2022/04/28 12:31:51 by antramir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
The strlcat() function appends the NUL-terminated string src to the end of dst. 
It will append at most size - strlen(dst) - 1 bytes, NUL-terminating the result.
strlcat() functions return the total length of the string they tried to create.
For strlcat() that means the initial length of dst plus the length of src.
*/
size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	pos;
	size_t	i;
	size_t	dest_size;
	size_t	src_size;

	i = 0;
	dest_size = ft_strlen(dest);
	src_size = ft_strlen(src);
	pos = ft_strlen(dest);
	if (dstsize == 0)
		return (src_size);
	while (pos < dstsize - 1 && src[i] != '\0')
	{
		dest[pos] = src[i];
		pos++;
		i++;
	}
	dest[pos] = '\0';
	if (src_size + dstsize <= src_size + dest_size && (int)dstsize >= 0)
		return (src_size + dstsize);
	else
	{
		return (src_size + dest_size);
	}
}
