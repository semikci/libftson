/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekmekci <sekmekci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 00:01:47 by sekmekci          #+#    #+#             */
/*   Updated: 2023/10/14 00:01:50 by sekmekci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/*
int main()
{
	char	cdizi[] = "Bilgisayar";
	printf("dizinin ilk hali %s\n", cdizi);
	bzero(cdizi, 4);
	printf("dizinin bzero kullanılmış hali %s\n", cdizi);
}

int main( void )
{
    char buffer[80] = "semih vurdu gol oldu";

	bzero( buffer, 80 );
	printf("%s", buffer);
	return EXIT_SUCCESS;
}*/