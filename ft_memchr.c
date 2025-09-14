/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkarnpan <nkarnpan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 20:53:59 by marvin            #+#    #+#             */
/*   Updated: 2025/09/14 21:51:44 by nkarnpan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*s_new;

	s_new = s;
	while (n > 0)
	{
		if (*s_new == (unsigned char) c)
			return ((void *) s_new);
		n--;
		s_new++;
	}
	return (NULL);
}

// int main()
// {
// 	// char s[] = "hello";
// 	char s[] = {0, 1, 2 ,3 ,4 ,5};
// 	// int c = '&';
// 	unsigned char *str;
// 	// size_t n = 10;
// 	str = ft_memchr(s, 0, 1);
// 	printf("%s\n", str);
// }