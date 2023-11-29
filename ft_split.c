/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antramir <antramir@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 20:51:31 by antramir          #+#    #+#             */
/*   Updated: 2022/05/30 20:17:55 by antramir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_word_count(const char *s, char c)
{
	int	num_words;
	int	pos;

	pos = 0;
	num_words = 0;
	while (*s != '\0')
	{
		if (*s != c)
		{
			if (pos == 0)
			{
				pos = 1;
				num_words++;
			}
		}
		if (*s == c)
			pos = 0;
		s++;
	}
	return (num_words);
}

static void	ft_add_word(char **str, char *s, char c, int *pos)
{
	char	*word;
	int		num_char;
	int		i;

	num_char = 0;
	while (s[*pos] == c)
		(*pos)++;
	i = *pos;
	while (s[i] != c && s[i] != '\0')
	{
		num_char++;
		i++;
	}
	i = 0;
	word = (char *) malloc (sizeof(char) * (num_char) + 1);
	if (!word)
		return ;
	while (s[*pos] != c && s[*pos] != '\0' )
	{
		word[i++] = s[*pos];
		(*pos)++;
	}
	word[i] = '\0';
	*str = word;
}

/*
Reserve (using malloc(3)) an array of strings resulting from separating 
the string 's' into substringsusing the character 'c' as a delimiter. The
array must end with a NULL pointer.
*/
char	**ft_split(const char *s, char c)
{
	char	**str;
	char	*to_split;
	int		n_words;
	int		pos;
	int		i;

	i = 0;
	pos = 0;
	if (!s)
		return (NULL);
	to_split = (char *) s;
	n_words = ft_word_count(s, c);
	str = (char **) malloc ((sizeof(str) * (n_words + 1)));
	if (!str)
		return (NULL);
	i = 0;
	while (i++ < n_words)
		ft_add_word(str++, to_split, c, &pos);
	*str = NULL;
	str = &str[-n_words];
	return (str);
}
