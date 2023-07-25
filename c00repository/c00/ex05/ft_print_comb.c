/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papangao <papangao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 15:58:03 by papangao          #+#    #+#             */
/*   Updated: 2023/07/25 15:58:03 by papangao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_digit_1(int n);
void	print_digit_2(int _i, int n);
void	print_digit_3(int _i, int _j, int n);

void	ft_print_comb(void)
{
	print_digit_1(10);
}

void	print_digit_1(int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		print_digit_2(i, n);
		i++;
	}
}

void	print_digit_2(int _i, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (i != _i)
		{
			print_digit_3(_i, i, n);
		}
		i++;
	}
}

void	print_digit_3(int _i, int _j, int n)
{
	char	c[3];
	int		i;

	i = 0;
	while (i < n)
	{
		c[0] = 48 + _i;
		c[1] = 48 + _j;
		c[2] = 48 + i;
		if ((i != _j) && (i != _i) && ((_i < _j) & (_j < i)))
		{
			write(1, c, 3);
			write(1, ", ", 2);
		}
		i++;
	}
}
