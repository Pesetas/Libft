/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antramir <antramir@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 09:04:52 by antramir          #+#    #+#             */
/*   Updated: 2022/04/26 16:15:31 by antramir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
The strchr() function returns a pointer to the first occurrence
of the character c in the string s.
*/
char	*ft_strchr(const char *s, int c)
{
	char	*ptr;
	char	to_catch;

	ptr = (char *)s;
	to_catch = (char)c;
	while (*ptr)
	{
		if (*ptr == to_catch)
			return (ptr);
		ptr++;
	}
	if (to_catch == '\0')
		return (ptr);
	return (NULL);
}
