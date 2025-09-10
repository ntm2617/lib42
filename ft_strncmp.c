/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkarnpan <nkarnpan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 16:10:29 by marvin            #+#    #+#             */
/*   Updated: 2025/09/10 21:14:23 by nkarnpan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		if (s1[i] == s2[i])
			i++;
		else
			return ((unsigned char )s1[i] - (unsigned char )s2[i]);
	}
	return (0);
}

// int main()
// {
// 	const char s1[] = "hello";
// 	const char s2[] = "helao";
// 	size_t n = 5;
// 	printf("%d\n", ft_strncmp(s1, s2, n));
// 	printf("%d\n", f_strncmp(s1,s2, n));
// }