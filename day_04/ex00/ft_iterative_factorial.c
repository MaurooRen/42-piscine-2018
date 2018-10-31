/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrengifo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 16:52:43 by mrengifo          #+#    #+#             */
/*   Updated: 2018/10/27 23:26:46 by mrengifo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int aux;
	int result;

	aux = nb;
	result = 1;
	if (nb > 0 && nb <= 12)
	{
		while (aux != 1)
		{
			result = result * aux;
			aux--;
		}
	}
	else
	{
		result = 0;
	}
	return (result);
}
