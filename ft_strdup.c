/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antramir <antramir@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 10:39:36 by antramir          #+#    #+#             */
/*   Updated: 2022/05/12 01:48:44 by antramir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
The strdup() function returns a pointer to a new string which is
a duplicate of the string s.  Memory for the new string is obtained with 
malloc(3), and can be freed with free(3).
*/
char	*ft_strdup(const char *s1)
{
	char	*ptr;
	int		i;

	ptr = malloc((sizeof(*ptr) * ft_strlen(s1)) + 1);
	if (!ptr)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
