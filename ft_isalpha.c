/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antramir <antramir@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 10:10:46 by antramir          #+#    #+#             */
/*   Updated: 2022/04/19 10:42:03 by antramir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
checks for an alphabetic character; in the standard "C" locale, it is equivalent 
to (isupper(c) || islower(c)). In some locales, there may be additional 
characters for which isalpha() is true—letters which are neither uppercase nor 
lowercase.
*/
int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
