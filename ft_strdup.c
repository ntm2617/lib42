/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkarnpan <nkarnpan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 13:02:27 by marvin            #+#    #+#             */
/*   Updated: 2025/09/10 21:14:00 by nkarnpan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*s;
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(str);
	s = malloc(sizeof(char) * (len + 1));
	while (str[i] != '\0' && i < len)
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}

// #include <stdio.h>
// int main()
// {
// 	const char str[] = "Hello World";
// 	char *s;
// 	s = ft_strdup(str);
// 	printf("%s\n", s);
// }