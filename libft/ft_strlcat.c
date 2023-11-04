/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekmekci <sekmekci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 23:57:10 by sekmekci          #+#    #+#             */
/*   Updated: 2023/10/15 21:23:04 by sekmekci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	b;

	b = ft_strlen(dest) + ft_strlen(src);
	if (size <= (size_t)ft_strlen(dest))
		return (size + ft_strlen(src));
	ft_strlcpy(dest + ft_strlen(dest), src, size - ft_strlen(dest));
	return (b);
}
	/* size_t	i;
	size_t	f;

	i = 0;
	f = 0;
	while (dest[i] && i < size)
		i++;
	while (src[f] && (i + f + 1) < size)
	{
		dest[i + f] = src[f];
		f++;
	}
	if (i < size)
		dest[i + f] = 0;
	return (i + ft_strlen(src));
	*/
