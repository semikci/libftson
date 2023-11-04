/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekmekci <sekmekci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:55:51 by sekmekci          #+#    #+#             */
/*   Updated: 2023/10/19 20:04:46 by sekmekci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		(*f)(i, &(s[i]));
		i++;
	}
}

/*void	ft_up(unsigned int i, char *a)
{
	a[i] -= 32;
}

int	main(void)
{
	char	str[] = "semih";

	ft_striteri(str, ft_up);
	printf("%s\n", str);
}
*/