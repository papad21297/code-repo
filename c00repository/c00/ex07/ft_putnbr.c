/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papangao <papangao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 19:08:07 by papangao          #+#    #+#             */
/*   Updated: 2023/07/26 19:08:07 by papangao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	c;

	if ((nb >= 0) && (nb < 10))
	{
		c = '0' + nb;
		write(1, &c, 1);
	}
	else if ((nb >= 10))
	{
		c = '0' + (nb % 10);
		ft_putnbr(nb / 10);
		write(1, &c, 1);
		if (nb < 0)
			write(1, "-", 1);
	}
	else
	{
		write(1, "-", 1);
		ft_putnbr(nb * -1);
	}
}
