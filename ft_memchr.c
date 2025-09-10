/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkarnpan <nkarnpan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 20:53:59 by marvin            #+#    #+#             */
/*   Updated: 2025/09/10 17:16:29 by nkarnpan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s_new;

	s_new = (unsigned char *) s;
	while (*s_new != '\0' || n > 0)
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
// 	const char s[] = "hello world";
// 	int c = 'o';
// 	unsigned char *str;
// 	size_t n = 7;
// 	str = ft_memchr(s,c, n);
// 	printf("%s\n",str );
// }