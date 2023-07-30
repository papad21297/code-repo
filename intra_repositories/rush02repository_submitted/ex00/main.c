/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psathiar <psathiar@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 13:26:11 by psathiar          #+#    #+#             */
/*   Updated: 2023/07/30 19:09:49 by psathiar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

long long int	getdec(long long int nb)
{
	if (nb >= 90)
		return (90);
	else if (nb >= 80)
		return (80);
	else if (nb >= 70)
		return (70);
	else if (nb >= 60)
		return (60);
	else if (nb >= 50)
		return (50);
	else if (nb >= 40)
		return (40);
	else if (nb >= 30)
		return (30);
	else if (nb >= 20)
		return (20);
	else if (nb <= 20)
		return (nb);
	else
		return (0);
}

long long int	getmult(long long int nb)
{
	if (nb >= 1000000000)
		return (1000000000);
	else if (nb >= 1000000)
		return (1000000);
	else if (nb >= 1000)
		return (1000);
	else if (nb >= 100)
		return (100);
	else
		return (getdec(nb));
}

void	ft_print(long long int n, t_list *tab, int *first)
{
	int				i;
	long long int	mult;

	i = 0;
	mult = getmult(n);
	if (mult >= 100)
		ft_print(n / mult, tab, first);
	if (*first == 0)
		write(1, " ", 1);
	*first = 0;
	while (tab[i].nb != mult)
		i++;
	ft_putstr(tab[i].val);
	if (mult != 0 && n % mult != 0)
		ft_print(n % mult, tab, first);
}

int	is_not_valid(char *av)
{
	int	i;

	i = 0;
	while (av[i] != '\0')
	{
		if ((av[i] >= '0' && av[i] <= '9'))
			i++;
		else
			return (1);
	}
	return (0);
}

int	main(int ac, char **av)
{
	t_list	*tab;
	int		*first;
	int		addr_first;

	addr_first = 1;
	first = &addr_first;
	if (ac == 2)
	{
		if (is_not_valid(av[1]) == 1 
			|| (ft_atoi(av[1]) < 0))
		{
			write(1, "Error\n", 6);
			return (0);
		}
		if (ft_atoi(av[1]) == 0)
		{
			write(1, "zero\n", 5);
			return (0);
		}
		tab = process("numbers.dict");
		ft_print(ft_atoi(av[1]), tab, first);
		write(1, "\n", 1);
	}
	return (0);
}
