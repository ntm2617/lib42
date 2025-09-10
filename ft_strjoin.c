/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkarnpan <nkarnpan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 16:52:19 by nkarnpan          #+#    #+#             */
/*   Updated: 2025/09/10 18:17:39 by nkarnpan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t		i;
	size_t		j;
	
	i = 0;
	j = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	str = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	if (i < (ft_strlen(s1) + ft_strlen(s2)))
	{
		while (s1[i] != '\0')
		{
			str[i] = s1[i];
			i++;
		}
		while (s2[j] != '\0')
			str[i++] = s2[j++];
	}
	str[i] = '\0';
	return (str);
}

// int main()
// {
// 	const char s1[] = "hello";
// 	const char s2[] = " worlddd";

// 	printf("%s\n", ft_strjoin(s1, s2));
// }