/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfauvell <cfauvell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 19:28:57 by cfauvell          #+#    #+#             */
/*   Updated: 2018/11/15 13:36:57 by cfauvell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char			*tab;
	const unsigned char		*tabi;

	tab = (unsigned char *)dest;
	tabi = (const unsigned char *)src;
	while (n--)
		*tab++ = *tabi++;
	return (dest);
}
