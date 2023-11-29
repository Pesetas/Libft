/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antramir <antramir@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 11:26:07 by antramir          #+#    #+#             */
/*   Updated: 2022/05/17 22:59:55 by antramir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
Reserve (with malloc(3)) and return a substring of the string 's'. 
The substring starts from the index 'start' and has a maximum length of 
'len'.
*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	if (ft_strlen(s) < start)
		len = 0;
	else if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	substr = (char *) malloc(sizeof(char) * (len + 1));
	if (!(substr))
		return (NULL);
	if (start > ft_strlen(s))
	{
		*substr = '\0';
		return (substr);
	}
	i = 0;
	while (i < len && s[start] != '\0')
	{
		substr[i] = s[start];
		start++;
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
