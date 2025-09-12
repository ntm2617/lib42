/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 16:53:12 by marvin            #+#    #+#             */
/*   Updated: 2025/09/12 16:53:12 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	size(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
			count++;
		i++;
	}
	return (count);
}

int	group(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			count++;
		i++;
	}
	if (s[i] == '\0')
		count++;
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		len;
	int		i;
	int		j;
	int		n;

	n = 0;
	i = group(s, c);
	j = 0;
	len = sizeof(char) * (size(s, c) + 1) + sizeof(char*) * ((group(s, c) + 1));
	arr = malloc(len);
	if (*arr == NULL)
		return (NULL);
	while (*(s + n) != '\0' && i > 0)
	{
		if (*(s + n) != c)
			arr[group(s, c) - i][j++] = *(s + n);
		else if (*(s + n) == c)
			i--;
		n++;
	}
	*(arr + group(s, c) - 1) = NULL;
	return (arr);
	}

int main()
{
	char const s[] = "HELLO, my, name";
	char c = ',';
	char **arr;

	arr = ft_split(s, c);
	printf("%d\n", size(s, c));
	printf("%d\n", group(s, c));
	printf("%s\n", *arr);
}