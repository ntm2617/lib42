/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkarnpan <nkarnpan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 21:12:24 by nkarnpan          #+#    #+#             */
/*   Updated: 2025/09/10 21:18:40 by nkarnpan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	size_t	len_set;

	len_set = ft_strlen(set);
	str = malloc(sizeof(char) * )
	while (s1[i] != '\0')
	{
		if (i < len_set && set[i] == s1[i])
			str[i] == '\0';
		else if (set[i] != s1[i])
			str[i] == s1[i];
		i++;
	}
}
