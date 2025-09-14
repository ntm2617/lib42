/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkarnpan <nkarnpan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 20:16:09 by nkarnpan          #+#    #+#             */
/*   Updated: 2025/09/15 02:43:43 by nkarnpan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	if (s == NULL || f == NULL)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

// void f(unsigned int i, char *c)
// {
// 	while (c[i] != '\0')
// 	{
// 		c[i] = '2';
// 		i++;
// 	}
// }
// int main()
// {
// 	char s[] = "hello";

// 	ft_striteri(s, f);
// 	printf("%s\n", s);
// }