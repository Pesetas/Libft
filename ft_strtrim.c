/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antramir <antramir@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 17:53:46 by antramir          #+#    #+#             */
/*   Updated: 2022/05/18 12:47:33 by antramir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_initstr(const char *s1, const char *set)
{
	int	init_pos;

	init_pos = 0;
	while (s1[init_pos] != '\0')
	{
		if (ft_strchr(set, s1[init_pos]))
			init_pos++;
		else
			break ;
	}
	return (init_pos);
}

static int	ft_finalstr(const char *s1, const char *set)
{
	int	final_pos;

	final_pos = ft_strlen(s1) - 1;
	if (final_pos < 0)
		final_pos = 0;
	while (s1[final_pos])
	{
		if (ft_strchr (set, s1[final_pos]))
			final_pos--;
		else
			break ;
	}
	return (final_pos);
}

/*
Remove all characters from the string 'set' from the beginning and from the end 
of 's1', until find a character not belonging to 'set'. The resulting string is 
returned with a fallback of malloc(3)
*/
char	*ft_strtrim(const char *s1, const char *set)
{
	int		init_pos;
	int		final_pos;
	int		i;
	char	*str;

	i = 0;
	if (!s1 || !set)
		return (ft_strdup(NULL));
	if (ft_strcmp(s1, "") == 0)
		return (ft_strdup(""));
	init_pos = ft_initstr(s1, set);
	final_pos = ft_finalstr(s1, set);
	if (init_pos > final_pos)
		return (ft_strdup(""));
	str = (char *)malloc(sizeof(*str) * (final_pos - init_pos + 2));
	if (!str)
		return (NULL);
	while (init_pos <= final_pos)
		str[i++] = s1[init_pos++];
	str[i] = '\0';
	return (str);
}
