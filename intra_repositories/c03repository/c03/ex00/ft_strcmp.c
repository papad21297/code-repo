/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papangao <papangao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 13:53:36 by papangao          #+#    #+#             */
/*   Updated: 2023/08/03 13:59:12 by papangao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (((s1[i] != '\0') && (s2[i] != '\0')) && (s1[i] == s2[i]))
		++i;
	return (s1[i] - s2[i]);
}