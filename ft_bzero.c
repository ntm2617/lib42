/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkarnpan <nkarnpan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 23:31:58 by marvin            #+#    #+#             */
/*   Updated: 2025/09/10 17:21:57 by nkarnpan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*a;
	size_t			i;

	a = s;
	i = 0;
	while (n > 0)
	{
		a[i] = 0;
		n--;
		i++;
	}
}

// #include <strings.h>
// #include <stdio.h>

// int main()
// {
// 	char str[50] = "Iloverainbow.";
// 	char st[50] = "Iloverainbow.";
// 	ft_bzero(str + 1, 5);
// 	bzero(st + 1, 5);
// 	printf("ft_bzero: %s", str);
// 	printf("bzero: %s", st);

// }
