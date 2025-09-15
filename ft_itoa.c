/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkarnpan <nkarnpan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 03:27:38 by nkarnpan          #+#    #+#             */
/*   Updated: 2025/09/15 03:12:21 by nkarnpan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n = -n;
		i++;
	}
	while (n > 9)
	{
		n = n / 10;
		i++;
	}
	return (i + 1);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i = count(n);
	str = malloc(sizeof(char) * (i + 1));
	if (str == NULL)
		return (NULL);
	str[i] = '\0';
	if (n < 0)
	{
		n = -n;
		str[0] = '-';
	}
	else if (n == 0)
		str[0] = '0';
	while (n > 9 && i > 0)
	{
		str[i-- - 1] = (n % 10) + '0';
		n = n / 10;
	}
	str[i - 1] = n + '0';
	return (str);
}

// int main()
// {
// 	int c = -2147483648;
// 	// printf("%d\n", count(c));
// 	char	*d;
// 	int		i;

// 	i = 0;
// 	d = ft_itoa(c);
// 	printf("%s\n", d);
// 	// printf("%d\n", count(c));
// }