/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkarnpan <nkarnpan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 01:24:14 by marvin            #+#    #+#             */
/*   Updated: 2025/09/15 03:01:09 by nkarnpan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	if (*s2 == '\0')
		return ((char *) s1);
	while (s1[i] != '\0' && i < len)
	{
		if (s1[i] == s2[0])
		{
			j = 0;
			while (s1[i + j] == s2[j] && i + j < len && s2[j] != '\0')
				j++;
			if (s2[j] == '\0')
				return ((char *)(s1 + i));
		}
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// int main()
// {
// 	char s1[] = "hello";
// 	char s2[] = "lo";
// 	printf("%s", ft_strnstr(s1,s2,5));
// }