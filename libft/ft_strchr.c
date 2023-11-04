/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekmekci <sekmekci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 23:13:26 by sekmekci          #+#    #+#             */
/*   Updated: 2023/11/04 17:30:35 by sekmekci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	n;

	n = ft_strlen(s) + 1;
	while ((n-- > 0))
		if (*s++ == (char)c)
			return ((char *)--s);
	return (NULL);
}
