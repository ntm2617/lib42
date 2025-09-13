/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkarnpan <nkarnpan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 01:09:22 by marvin            #+#    #+#             */
/*   Updated: 2025/09/10 21:14:09 by nkarnpan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	len_dest;
	size_t	len_src;
	size_t	i;

	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	i = 0;
	if (len_dest >= n)
		return (len_src + n);
	if (n != 0 && n > len_dest)
	{
		while (src[i] != '\0' && i < (n - len_dest - 1))
		{
			dest[len_dest + i] = src[i];
			i++;
		}
		dest[len_dest + i] = '\0';
	}
	return (len_dest + len_src);
}

// #include <stdio.h>

// int main()
// {
// 	char dest[] = "hello";
// 	char *src = " world";
// 	size_t a = ft_strlcat(dest, src, 20);
// 	printf("%s\n", dest);
// }