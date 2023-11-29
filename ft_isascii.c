/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antramir <antramir@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 13:53:19 by antramir          #+#    #+#             */
/*   Updated: 2022/04/19 14:07:06 by antramir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
checks whether c is a 7-bit unsigned char value that fits
into the ASCII character set.
*/
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
