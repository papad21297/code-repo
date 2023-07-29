/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papangao <papangao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 20:33:53 by papangao          #+#    #+#             */
/*   Updated: 2023/07/26 20:33:53 by papangao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_combn_putchar(char c);
void	print_combination(int combination[], int n);
void	generate_combinations(int combination[], int n, int next, int index);

void	ft_print_combn(int n)
{
	int	*combination;

	combination[n];
	if (n <= 0 || n >= 10)
	{
		return ;
	}
	generate_combinations(combination, n, 0, 0);
}

void	print_combn_putchar(char c)
{
	write(1, &c, 1);
}

void	print_combination(int combination[], int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		print_combn_putchar(combination[i] + '0');
		i++;
	}
	if (combination[0] != 10 - n)
	{
		print_combn_putchar(',');
		print_combn_putchar(' ');
	}
}

void	generate_combinations(int combination[], int n, int next, int index)
{
	int	i;

	if (index == n)
	{
		print_combination(combination, n);
		return ;
	}
	i = next;
	while (i <= 9)
	{
		combination[index] = i;
		generate_combinations(combination, n, i + 1, index + 1);
		i++;
	}
}
