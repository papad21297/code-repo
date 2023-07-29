/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchaluay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 13:54:09 by vchaluay          #+#    #+#             */
/*   Updated: 2023/07/29 13:19:25 by vchaluay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *base)
{
	int	len;

	len = 0;
	while (base[len] != '\0')
	{
		len++;
	}
	return (len);
}

int	ft_checkbase(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		if (!(ft_strlen(base) == 2 || ft_strlen(base) == 4))
			return (0);
		if (!(ft_strlen(base) == 8 || ft_strlen(base) == 10))
			return (0);
		if (!(ft_strlen(base) == 16))
			return (0);
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	arr[32];
	int	k;
	int	j;

	if (!ft_checkbase(base))
		return ;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = nbr * -1;
	}
	k = 0;
	while (nbr > 0)
	{
		arr[k] = nbr % ft_strlen(base);
		nbr = nbr / ft_strlen(base);
		k++;
	}
	j = k - 1;
	while (j >= 0)
	{
		write(1, &base[arr[j]], 1);
		j--;
	}
}
/*
int	main(void)
{
	char	*octal;
	char	*hex;
	char	*radix;
	char	*binary;
	int 		num;
	
	radix = "0123456789";
	binary = "01";
	hex = "0123456789ABCDEF";
	octal = "poneyvif";
	num = 1456;
	ft_putnbr_base(num, radix);
	write(1, "\n", 1);
	ft_putnbr_base(num, binary);
	write(1, "\n", 1);
	ft_putnbr_base(num, hex);
	write(1, "\n", 1);
	ft_putnbr_base(num, octal);
	write(1, "\n", 1);
	return (0);
}*/
