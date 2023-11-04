/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekmekci <sekmekci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 01:43:48 by sekmekci          #+#    #+#             */
/*   Updated: 2023/10/15 21:30:20 by sekmekci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	n;

	if (*s2 == 0)
		return ((char *)s1);
	n = ft_strlen(s2);
	while (*s1 && n <= len)
	{
		if (*s1 == *s2 && !ft_strncmp(s1, s2, n))
			return ((char *)s1);
		++s1;
		--len;
	}
	return (NULL);
}
