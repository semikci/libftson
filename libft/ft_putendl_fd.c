/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekmekci <sekmekci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 18:00:23 by sekmekci          #+#    #+#             */
/*   Updated: 2023/11/04 19:07:15 by sekmekci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!*s)
	{
		write(fd, "\n", 1);
		return ;
	}
	write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}

/*int	main(void)
{
	int	fd;

	fd = open("deneme3", O_CREAT | O_RDWR, 0777);
	ft_putendl_fd("semih", fd);
}*/
