/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrengifo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 16:22:38 by mrengifo          #+#    #+#             */
/*   Updated: 2018/10/25 19:40:20 by mrengifo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print(char c);

void	ft_print_numbers(void)
{
	char r;

	r = '0';
	while (r <= '9')
	{
		ft_putchar(r);
		r = r + 1;
	}
}
