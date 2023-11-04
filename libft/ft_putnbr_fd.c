/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekmekci <sekmekci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 18:11:37 by sekmekci          #+#    #+#             */
/*   Updated: 2023/11/04 18:57:42 by sekmekci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putnbr(int nb, int fd)
{
	int	a;

	if (nb == -2147483648)
		write(fd, "-2147483648", 11);
	if (nb < 0 && nb != -2147483648)
	{
		write(fd, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10, fd);
		ft_putnbr(nb % 10, fd);
	}
	if (nb < 10 && nb >= 0)
	{
		a = 48 + nb;
		write(fd, &a, 1);
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	ft_putnbr(n, fd);
}

/*int	main(void)
{
	int	fd;

	fd = open("deneme4", O_CREAT | O_RDWR, 0777);
	ft_putnbr_fd(1231453, fd);
}
*/