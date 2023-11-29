/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antramir <antramir@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 08:57:57 by antramir          #+#    #+#             */
/*   Updated: 2022/04/28 12:42:41 by antramir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
The atoi() function converts the initial portion of the string
pointed to by nptr to int.
*/
int	ft_atoi(const char *str)
{
	long	number;
	long	sign;

	number = 0;
	sign = 1;
	if (*str == '\0')
		return (number);
	while (*str == '\t' || *str == '\n' || *str == '\v' || *str == '\f' \
			|| *str == '\r' || *str == ' ')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		number = number * 10 + (*str - '0');
		str++;
	}
	return (number * sign);
}
