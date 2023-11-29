/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antramir <antramir@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 11:27:47 by antramir          #+#    #+#             */
/*   Updated: 2022/05/17 22:09:02 by antramir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_lenght_compare(const char *n, size_t *i, size_t *j, size_t *pos)
{
	if (*j == ft_strlen(n))
		return (1);
	else
	{
		*i = ++*pos;
		*j = 0;
	}
	return (0);
}

/*
The strnstr() function locates the	first occurrence of the	null-termi-
nated string little in the	string big, where not more than	len characters
are searched.  Characters that appear after a `\0'	character are not
searched.
*/
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	pos;

	i = 0;
	j = 0;
	pos = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len && i < ft_strlen(haystack))
	{
		if (haystack[i] == needle[j])
		{
			while (haystack[i] == needle[j] && needle[j] != '\0' && i < len)
			{
				i++;
				j++;
			}
			if (ft_lenght_compare(needle, &i, &j, &pos))
				return ((char *)&haystack[i - j]);
		}
		else
			i++;
	}
	return (NULL);
}
