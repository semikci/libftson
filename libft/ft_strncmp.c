/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekmekci <sekmekci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 00:21:32 by sekmekci          #+#    #+#             */
/*   Updated: 2023/10/15 18:21:48 by sekmekci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n-- && (*(unsigned char *)s1 || *(unsigned char *)s2))
		if (*(unsigned char *)s1++ != *(unsigned char *)s2++)
			return (*(unsigned char *)--s1 - *(unsigned char *)--s2);
	return (0);
}
