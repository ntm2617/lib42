/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkarnpan <nkarnpan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 20:49:18 by marvin            #+#    #+#             */
/*   Updated: 2025/09/16 00:02:31 by nkarnpan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = dest;
	s = src;
	if (dest == NULL || src == NULL)
		return (dest);
	if (s > d)
		ft_memcpy(dest, src, n);
	else
	{
		while (n-- > 0)
			d[n] = s[n];
	}
	return (dest);
}

// int main()
// {
// 	char dest[] = "123456789";
// 	char src[] = "helloeiei";

// 	ft_memmove(dest, src, 3);
// 	printf("%s\n", dest);
// }