/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkarnpan <nkarnpan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 21:12:24 by nkarnpan          #+#    #+#             */
/*   Updated: 2025/09/15 03:03:27 by nkarnpan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char const	*str1;
	char const	*str2;
	char		*str;
	size_t		len;
	size_t		n;

	if (s1 == NULL || set == NULL)
		return (NULL);
	while (ft_strchr(set, *s1) && *s1 != '\0')
		s1++;
	str1 = s1;
	len = ft_strlen(s1);
	while (len > 0 && ft_strchr(set, *(s1 + len - 1)))
		len--;
	str2 = s1 + len;
	n = str2 - str1 ;
	str = malloc(sizeof(char) * (n + 1));
	if (str == NULL)
		return (NULL);
	str[n] = '\0';
	while (n-- > 0)
		str[n] = str1[n];
	return (str);
}

// int main()
// {
// 	char const s1[] = " hello ";
// 	char const set[] = " ";
// 	char *r = ft_strtrim(s1,set);
// 	if (r == NULL)
// 	{
// 		printf("NULL\n");
// 		return (0);
// 	}
// 	else 
// 		printf("%s\n", r);
// }
// abc---
// s1 = ---
// s2 = ---abc
// res = s2 - s1

// res = abc
// *(str + n - 1) = '\0';
// while (--n > 0)	
// 	*(str + n - 1) = *(str1 + n - 1);
// return (str);