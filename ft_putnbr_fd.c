/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 19:02:39 by marvin            #+#    #+#             */
/*   Updated: 2025/09/14 19:02:39 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
void	ft_putnbr_fd(int n, int fd)
{
	int	a;
	char b;

	if (n == 0)
		write(fd, "0", 1);
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	else if (n > 9)
	{
		n = n / 10;
		ft_putnbr_fd(n, fd);
	}
	a = n % 10;
	b = a + '0';
	write(fd, &b, 1);
}

int main()
{
	ft_putnbr_fd(123, 1);
}