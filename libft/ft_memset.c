/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekmekci <sekmekci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 00:01:27 by sekmekci          #+#    #+#             */
/*   Updated: 2023/10/15 21:36:53 by sekmekci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	*ft_memset(void *dest, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)dest;
	while (n--)
		*ptr++ = (unsigned char)c;
	return (dest);
}
