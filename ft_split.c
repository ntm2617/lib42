/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkarnpan <nkarnpan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 02:23:27 by nkarnpan          #+#    #+#             */
/*   Updated: 2025/09/15 00:01:27 by nkarnpan         ###   ########.fr       */
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
	if (s[0] == c)
		i++;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i - 1] != c)
			count++;
		i++;
	}
	if (s[i] == '\0' && s[i - 1] != c)
		count++;
	return (count);
}

char	*reserve_mem(int *size_f, char const *s, char c, char **arr)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (i < *size_f)
	{
		s = s + n;
		if (size(s, c) == 0)
		{
			s++;
			continue ;
		}
		arr[i] = malloc(sizeof(char) * (size(s, c) + 1));
		if (arr[i] == NULL)
			return (NULL);
		n = size(s, c) + 1;
		i++;
	}
	return (*arr);
}

void	fill(int *size_f, char const *a, char c, char **arr)
{
	int	i;
	int	n;

	i = 0;
	while (i < *size_f)
	{
		n = 0;
		if (size(a, c) == 0)
		{
			a++;
			continue ;
		}
		while (n < size(a, c) + 1)
		{
			if (a[n] != c)
				arr[i][n] = a[n];
			else if (a[n] == c)
				arr[i][n] = '\0';
			n++;
		}
		a = a + n;
		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	char		**arr;
	char const	*a;
	int			size_f;

	a = s;
	arr = malloc(sizeof(char *) * (group(s, c) + 1));
	if (arr == NULL)
		return (NULL);
	size_f = group(s, c);
	reserve_mem(&size_f, s, c, arr);
	fill(&size_f, a, c, arr);
	return (arr);
}

// int main()
// {
// 	char const s[] = "hello, h, c,world";
// 	char c = ',';
// 	char **arr;
// 	int i = 0;

// 	printf("%d\n", size(s, c));
// 	printf("%d\n", group(s, c));
// 	reserve_mem(group(s, c), s, c, arr);
// 	// arr = ft_split(s, c);
// 	// while (i < group(s, c))
// 	// {
// 	// 	printf("%s\n", arr[i]);
// 	// 	i++;
// 	// }
// }