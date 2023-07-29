/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papangao <papangao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 12:28:15 by papangao          #+#    #+#             */
/*   Updated: 2023/07/29 15:10:57 by papangao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		next;
	char	c;

	next = 1;
	i = 0;
	while (*(str + i) != '\0')
	{
		c = *(str + i);
		if ((next == 1) && ((c >= 'a') && (c <= 'z')))
			str[i] -= 32;
		else if ((next == 0) && ((c >= 'A') && (c <= 'Z')))
			str[i] += 32;
		if ((c < '0') || ((c > '9') && (c < 'A')) || ((c > 'Z') && (c < 'a'))
			|| (c > 122))
			next = 1;
		else
			next = 0;
		i++;
	}
	return (str);
}
