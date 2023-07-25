/* ************************************************************************** */
/*	                                                                        */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papangao <papangao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 16:24:28 by papangao          #+#    #+#             */
/*   Updated: 2023/07/25 16:24:28 by papangao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_comb2_digit_1(int n);
void	print_comb2_digit_2(int _i, int n);

void	ft_print_comb2(void)
{
	print_comb2_digit_1(100);
}

void	print_comb2_digit_1(int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		print_comb2_digit_2(i, n);
		i++;
	}
}

void	print_comb2_digit_2(int _i, int n)
{
	char c[5];
	int i;

	i = 0;
	while (i < n)
	{
		if ((i != _i) && (_i < i))
		{
			c[0] = 48 + ((_i - (_i % 10)) / 10);
			c[1] = 48 + (_i % 10);
			c[2] = ' ';
			c[3] = 48 + ((i - (i % 10)) / 10);
			c[4] = 48 + (i % 10);
			write(1, c, 5);
			write(1, ", ", 2);
		}
		i++;
	}
}
