/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkarnpan <nkarnpan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 22:55:38 by marvin            #+#    #+#             */
/*   Updated: 2025/09/10 21:13:03 by nkarnpan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char) c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}

// int main()
// {
// 	char s[] = "Hello World lovEyou";
// 	char a[] = "Hello Eiei";
// 	int c = 'E';
// 	printf("%s\n", ft_strchr(s, c));
// 	printf("%s", strchr(a, c));
// }