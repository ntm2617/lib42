/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkarnpan <nkarnpan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 23:21:04 by marvin            #+#    #+#             */
/*   Updated: 2025/09/15 02:40:02 by nkarnpan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*a;
	size_t			i;

	a = s;
	i = 0;
	while (n > 0)
	{
		a[i] = (unsigned char)c;
		i++;
		n--;
	}
	return (s);
}

// int main()
// {
// 	char str[50] = "Geekisgooddddddd";
// 	char st[50] = "Geekisgooddddddd";  

//     memset(str, '.', 8*sizeof(char));
//     printf("memset():  %s", str);

// 	ft_memset(st, '.', 8*sizeof(char));
// 	printf("ft_memset():  %s", st);
// }