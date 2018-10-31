/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrengifo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 21:43:56 by mrengifo          #+#    #+#             */
/*   Updated: 2018/10/30 23:28:57 by mrengifo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int result;
	int sign;
	int index;

	if (*str == '\0')
		return (0);
	result = 0;
	sign = 1;
	index = 0;
	if (str[0] == '-' || str[0] == '+')
		index++;
	else if (str[0] == '-')
		sign = -1;
	while (str[index] != '\0')
	{
		if (*str == ' ' || *str == '\t' || *str == '\n')
			index++;
		if (*str == '\r' || *str == '\v' || *str == '\f')
			index++;
		else if (str[index] >= '0' || str[index] <= '9')
			result = (result * 10 + str[index]) - '0';
		index++;
	}
	return (result * sign);
}
