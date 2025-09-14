/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkarnpan <nkarnpan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 20:22:59 by nkarnpan          #+#    #+#             */
/*   Updated: 2025/09/15 02:42:57 by nkarnpan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int		a;
	int		b;
	char	d;

	a = n % 10;
	b = n / 10;
	if (n < 0)
	{
		write(fd, "-", 1);
		a = -a;
		b = -b;
	}
	if (b > 9)
		ft_putnbr_fd(b, fd);
	else if (b <= 9 && b > 0)
	{
		b = b + '0';
		write(fd, &b, 1);
	}
	d = a + '0';
	write(fd, &d, 1);
}

// int main()
// {
// 	ft_putnbr_fd(0, 1);
// }