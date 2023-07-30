/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psathiar <psathiar@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 13:27:08 by psathiar          #+#    #+#             */
/*   Updated: 2023/07/30 19:00:55 by psathiar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

typedef struct s_list
{
	int		nb;
	char	*val;
}		t_list;
long long int	ft_atoi(const char *str);
char			*ft_strdup(char *src);
void			ft_putstr(char *str);
char			*ft_getnb(int fd);
char			*ft_getval(int fd, char *c);
int				is_not_valid(char *av);
t_list			*process(char *file);

#endif
