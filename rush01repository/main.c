/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: papangao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 15:51:34 by papangao          #+#    #+#             */
/*   Updated: 2023/07/21 15:51:36 by papangao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void rush01(void);

int main(void)
{
    int i;

    i = 0;
    while (i < 10)
    {
        printf("%d\n", i);
        i++;
    }
    rush01();
    return (0);
}
