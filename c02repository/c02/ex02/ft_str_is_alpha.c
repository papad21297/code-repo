/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papangao <papangao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 17:58:23 by papangao          #+#    #+#             */
/*   Updated: 2023/07/28 17:58:23 by papangao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int		i;
	char	current_char;

	i = 0;
	while (str[i] != '\0')
	{
		current_char = str[i];
		if (!(((current_char >= 'A') && (current_char <= 'Z')) || ((
			current_char >= 'a') && (current_char <= 'z'))))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
