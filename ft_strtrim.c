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

char	*ft_strtrim(char const *s1, char const *set)
{
	const char	*str1;
	const char	*str2;
	size_t		i;
	char		*res;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	str1 = s1;
	str2 = ft_strchr(s1, '\0');
	while (str2 > str1 && ft_strchr(set, *(str2 - 1)))
		str2--;
	i = str2 - str1;
	if (i == 0)
		return (ft_strdup(""));
	res = malloc(sizeof(char) * (i + 1));
	if (!res)
		return (NULL);
	ft_strlcpy(res, str1, (i + 1));
	return (res);
}