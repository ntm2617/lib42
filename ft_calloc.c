/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkarnpan <nkarnpan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 22:37:23 by marvin            #+#    #+#             */
/*   Updated: 2025/09/10 17:35:28 by nkarnpan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*str;

	str = malloc(n * size);
	if (str == NULL)
		return (NULL);
	ft_bzero(str, n * size);
	return (str);
}
// #include <stdio.h>
// #include <stdlib.h>
// int main() {
//    int n = 5;
//    int *array;
//    // use calloc function to allocate the memory
//    array = (int*)ft_calloc(n, sizeof(int));
//    if (array == NULL) {
//       fprintf(stderr, "Memory allocation failed!\n");
//       return 1;
//    }
//    //Display the array value
//    printf("Array elements after calloc: ");
//    for (int i = 0; i < n; i++) {
//       printf("%d ", array[i]);
//    }
//    printf("\n");
//    //free the allocated memory
//    free(array);
//    return 0;
// }