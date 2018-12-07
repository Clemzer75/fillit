/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfauvell <cfauvell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 19:16:39 by cfauvell          #+#    #+#             */
/*   Updated: 2018/11/15 13:37:09 by cfauvell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char			*tab;
	const unsigned char		*tabi;

	tab = (unsigned char *)dst;
	tabi = (const unsigned char *)src;
	while (n--)
	{
		*tab++ = *tabi++;
		if (*(tabi - 1) == (unsigned char)c)
		{
			return (tab);
		}
	}
	return (NULL);
}
