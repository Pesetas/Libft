/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antramir <antramir@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 09:27:51 by antramir          #+#    #+#             */
/*   Updated: 2022/04/26 16:15:07 by antramir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
The strrchr() function returns a pointer to the last occurrence of the 
character c in the string s.
*/
char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;
	char	to_catch;
	int		i;

	ptr = (char *)s;
	to_catch = (char)c;
	i = ft_strlen(ptr);
	while (i >= 0)
	{
		if (ptr[i] == to_catch)
			return (&ptr[i]);
		i--;
	}
	if (c == '\0')
		return (&ptr[i]);
	return (NULL);
}
