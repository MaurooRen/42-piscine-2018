/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrengifo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 19:49:58 by mrengifo          #+#    #+#             */
/*   Updated: 2018/10/25 22:31:04 by mrengifo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_putchar(char n);

void	ft_is_negative(int x)
{
	if (x < 0)
	{
		ft_putchar('N');
	}
	else
	{
		ft_putchar('P');
	}
}
