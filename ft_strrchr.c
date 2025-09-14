/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkarnpan <nkarnpan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 14:16:07 by marvin            #+#    #+#             */
/*   Updated: 2025/09/15 03:00:38 by nkarnpan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*last;

	last = NULL;
	while (*s != '\0')
	{
		if (*s == (char )c)
			last = s;
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return ((char *)last);
}

// int main()
// {
// 	const char s[] = "Hello Worldoeiei";
// 	const char t[] = "Hello Worldoeiei";
// 	int c = 'e';
// 	printf("%s\n", strrchr(s, c));
// 	printf("%s", ft_strrchr(t, c));
// }