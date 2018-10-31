/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrengifo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 22:16:01 by mrengifo          #+#    #+#             */
/*   Updated: 2018/10/27 23:27:59 by mrengifo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_power(int nb, int power)
{

	int i;
	int result;

	i = 1;
	result = 1;

while (i <= power)
	{
		result = result * nb;
		i++;
	}

	return (result);
}
