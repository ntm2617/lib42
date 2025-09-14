/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkarnpan <nkarnpan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 22:37:23 by marvin            #+#    #+#             */
/*   Updated: 2025/09/14 23:12:48 by nkarnpan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*str;

	if (n == 0 || size == 0)
		return (malloc(1));
	if ((n * size) > __INT_MAX__ || n > __INT_MAX__ || size > __INT_MAX__)
		return (NULL);
	str = malloc(n * size);
	if (str == NULL)
		return (NULL);
	ft_bzero(str, n * size);
	return (str);
}

// #include <stdio.h>
// #include <stdlib.h>
// int main() {

//    int *array;
//    // use calloc function to allocate the memory
//    array = (int*)ft_calloc(0, -5);
//    if (array == NULL) {
//       fprintf(stderr, "Memory allocation failed!\n");
//       return 1;
//    }
//    //Display the array value
//    printf("Array elements after calloc: ");
//    for (int i = 0; i < 0; i++) {
//       printf("%d ", array[i]);
//    }
//    printf("\n");
//    //free the allocated memory
//    free(array);
//    return 0;
// }