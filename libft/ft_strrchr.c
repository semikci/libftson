/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekmekci <sekmekci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 23:18:03 by sekmekci          #+#    #+#             */
/*   Updated: 2023/10/30 19:24:02 by sekmekci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	a;

	a = (int)ft_strlen(s) + 1;
	while (--a >= 0)
		if (s[a] == (char)c)
			return ((char *)s + a);
	return (NULL);
}

/*int	main(void)
{
	const char	*src = "";
	char	*d1 = strrchr(src, 'a');
	char	*d2 = ft_strrchr(src, 'a');

	if (d1 == d2)
		printf("aynı \n %s \n %s", d1, d2);
	printf("aynı \n %s \n %s", d1, d2);
}*/
