/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papangao <papangao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 15:56:56 by papangao          #+#    #+#             */
/*   Updated: 2023/08/03 16:09:03 by papangao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	strlcat_strlen(char *str);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	char			*str;
	unsigned int	len_dest;
	unsigned int	result;
	unsigned int	len_src;
	unsigned int	i;

	str = (char *)src;
	len_dest = strlcat_strlen(dest);
	result = 0;
	len_src = strlcat_strlen(str);
	if (size > len_dest)
		result = len_src + len_dest;
	else
		result = len_src + size;
	i = 0;
	while (str[i] && ((len_dest + 1) < size))
	{
		dest[len_dest] = str[i];
		len_dest++;
		i++;
	}
	dest[len_dest] = '\0';
	return (result);
}

unsigned int strlcat_strlen(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}