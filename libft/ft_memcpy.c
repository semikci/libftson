/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekmekci <sekmekci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 00:01:37 by sekmekci          #+#    #+#             */
/*   Updated: 2023/10/14 00:01:38 by sekmekci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

/*void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	s =(unsigned char *)src;
	d = (unsigned char *)dst;
	i = 0;
	while (s[i] && i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}*/
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!dest && !src)
		return (dest);
	d = dest;
	s = src;
	while (n-- > 0)
		*d++ = *s++;
	return (dest);
}

/*#include <stdio.h>
int main()
{
	const char	source[] = "semih gol attı";
	char	destination[5];
	printf("%s", ft_memcpy(destination, source, 10));
	//printf("%s", memcpy(destination, source, 10));
	int tab[] = {25, 2, 3};
	unsigned char *res;
	int dst[] = {5,6,7};
	
	
	//size_t i =sizeof(tab);
	size_t n = 0;
	res = ft_memcpy(dst, tab, 12);
	while(n < 12)
	{
		printf("%u ", res[n]);
		n += 4;
	}

}
*/