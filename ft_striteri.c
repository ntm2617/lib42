/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 18:41:14 by marvin            #+#    #+#             */
/*   Updated: 2025/09/14 18:41:14 by marvin           ###   ########.fr       */
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