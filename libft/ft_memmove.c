/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfauvell <cfauvell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 10:19:06 by cfauvell          #+#    #+#             */
/*   Updated: 2018/11/15 13:37:27 by cfauvell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dest1;
	unsigned char	*src1;

	dest1 = (unsigned char *)dest;
	src1 = (unsigned char *)src;
	i = 0;
	if (dest > src)
	{
		while (n--)
			dest1[n] = src1[n];
	}
	else
	{
		while (n--)
		{
			*dest1++ = *src1++;
		}
	}
	return (dest);
}
