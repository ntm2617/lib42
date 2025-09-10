/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkarnpan <nkarnpan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 01:06:21 by marvin            #+#    #+#             */
/*   Updated: 2025/09/10 17:14:09 by nkarnpan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	n;
	int	neg;

	neg = 1;
	n = 0;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
		neg *= -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		n = (n * 10) + (str[i] - '0');
		i++;
	}
	return (neg * n);
}

// #include <stdlib.h>
// #include <stdio.h>

// int main(void)
// {
//     int i;
//     char *s;
// 	int j;

//     s = "+9885";
//     i = atoi(s);
// 	j= ft_atoi(s);
//     printf("i = %d\n",i);
// 	printf("i = %d\n", j);
// }