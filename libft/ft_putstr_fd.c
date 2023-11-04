/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekmekci <sekmekci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 17:32:07 by sekmekci          #+#    #+#             */
/*   Updated: 2023/10/30 17:53:06 by sekmekci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!*s)
		return ;
	write(fd, s, ft_strlen(s));
}

/*int	main(void)
{
	int		fd;

	fd = open("deneme2", O_CREAT | O_RDWR, 0777);
	ft_putstr_fd("semih ekmekci", fd);
}
*/