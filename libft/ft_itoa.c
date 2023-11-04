/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekmekci <sekmekci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:17:54 by sekmekci          #+#    #+#             */
/*   Updated: 2023/10/18 18:17:33 by sekmekci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nbrlen(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i = 1;
	while (n)
	{
		n /= 10;
		++i;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;

	len = ft_nbrlen(n);
	str = ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		if (n == INT_MIN)
		{
			str[--len] = '8';
			n /= 10;
		}
		n = -n;
	}
	while (len-- && n != 0)
	{
		str[len] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}
/*

int	main(void)
{
	printf("%s\n", ft_itoa(-4312));
	printf("%c", ft_itoa(-4312)[6]);
}


static char	*ft_putnbr(int c)
{
	long	a;
	int		i;

	a = (long)c;
	if (a < 0)
		a *= -1;
	if (a >= 10)
	{
		ft_putnbr(a / 10);
		ft_putnbr(a % 10);
	}
	if (!i)
	{
		str[i] = 48 + a;
		i++;
	}
	if (a < 10)
		str[]
}
while (n > 0)
{
	k = n;
	i = 0;
	while (n >= 10)
	{
	n /= 10;
	i++;
	}
	str[j++] = 48 + n;
	if (!n)
		n = k - (n * ((int)pow(10, i)));
	}*/