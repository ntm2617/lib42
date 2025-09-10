/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 22:42:50 by marvin            #+#    #+#             */
/*   Updated: 2025/06/21 22:42:50 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main()
{
	// char *source = NULL;
	// char *dest = NULL;
	char source[] = "hello";
	char dest[] = "eiei";
	// char dest[50] = "123456hjkl";
	// source = dest;
	// ft_memset(dest, '.', 1);
	// ft_memcpy(dest, source, 3);
	// ft_memmove(source, source + 2, 3);
	ft_strlcat(dest, source, 8);
	printf("%s\n", dest);
}
