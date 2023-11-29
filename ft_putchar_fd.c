/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antramir <antramir@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 11:20:40 by antramir          #+#    #+#             */
/*   Updated: 2022/05/12 11:23:12 by antramir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Send character 'c' to file descriptor specified.
*/
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
