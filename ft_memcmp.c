/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkarnpan <nkarnpan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 00:19:35 by marvin            #+#    #+#             */
/*   Updated: 2025/09/10 17:17:40 by nkarnpan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*n1;
	unsigned char	*n2;
	size_t	i;

	n1 = (unsigned char *)s1;
	n2 = (unsigned char *)s2;
	i = 0;
	while (n1[i] != '\0' && n2[i] != '\0' && i < n)
	{
		if (n1[i] == n2[i])
			i++;
		else 
			return (n1[i] - n2[i]);
	}
	return (0);
}
