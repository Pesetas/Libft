/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antramir <antramir@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 14:42:36 by antramir          #+#    #+#             */
/*   Updated: 2022/04/19 14:45:35 by antramir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
checks for any printable character including space.
*/
int	ft_isprint(int c)
{
	if (c > 31 && c < 127)
		return (1);
	return (0);
}
