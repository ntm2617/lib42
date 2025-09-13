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
		else if (s[i] == c)
			return (count);
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
	int		i;
	int		n;
	char const	*a;
	
	a = s;
	i = 0;
	n = 0;
	arr = malloc(sizeof(char *) * (group(s, c) + 1));
	if (arr == NULL)
		return (NULL);
	while (i < group(s, c))
	{
		printf("%d\n", i);
		s = s + n;
		arr[i] = malloc(sizeof(char) * (size(s, c) + 1));
		printf("--->>>>%d\n",size(s, c));
		// if (arr[i] == NULL)
		// 	return (NULL);
		n = size(s, c);
		printf("////%d\n", n);
		i++;
	}
	i = 0;
	while (i < group(s, c))
	{
		n = 0;
		while (arr[i][n] != '\0')
		{
			if (*(a + n) != c)
			{
				a = a + n;
				arr[i][n] = *(a);
			}
			else if (*(a + n) == c)
				arr[i][n] = '\0';
			n++;
		}
		i++;
	}
	return (arr);
}

int main()
{
	char const s[] = "HELLO,my,name";
	char c = ',';
	char **arr;
	int i = 0;

	arr = ft_split(s, c);
	printf("%d\n", size(s, c));
	printf("%d\n", group(s, c));
	while (i < 3)
	{
		printf("%s\n", arr[i]);
		i++;
	}
}