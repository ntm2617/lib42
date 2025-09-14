/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkarnpan <nkarnpan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 15:42:39 by marvin            #+#    #+#             */
/*   Updated: 2025/09/15 02:39:50 by nkarnpan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	d = dest;
	s = src;
	i = 0;
	if (dest == NULL || src == NULL)
		return (dest);
	while (n > 0)
	{
		d[i] = s[i];
		i++;
		n--;
	}
	return (dest);
}

// #include <string.h>

// int main()
// {
// 	unsigned char dest[] = "hello brooo";
// 	unsigned char src[] = "eieiehi";
// 	size_t	n = 5;
// 	unsigned char *a;
// 	a = ft_memcpy(dest, NULL, n);
// 	// printf("%s\n", a);
// 	printf("Original: %s", a);
// }