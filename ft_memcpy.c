/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkarnpan <nkarnpan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 15:42:39 by marvin            #+#    #+#             */
/*   Updated: 2025/09/10 17:18:07 by nkarnpan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	const unsigned char	*s;
	size_t	i;

	d = dest;
	s = src;
	i = 0;
	if (dest == NULL || src == NULL)
		return (NULL);
	while (n > 0)
	{
		d[i] = s[i];
		i++;
		n--;
	}
	return (dest);

}
// #include <stdio.h>

// int main()
// {
// 	unsigned char dest[] = "hello brooo";
// 	unsigned char src[] = "eiei";
// 	size_t	n = 4;
// 	unsigned char *a;
// 	a = ft_memcpy(dest, src, n);
// 	printf("%s\n", a);
// }