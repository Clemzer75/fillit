/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfauvell <cfauvell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 17:33:48 by cfauvell          #+#    #+#             */
/*   Updated: 2018/11/15 13:38:07 by cfauvell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*tab1;
	const unsigned char	*tab2;

	tab1 = (const unsigned char *)s1;
	tab2 = (const unsigned char *)s2;
	while (n--)
	{
		if (*tab1 != *tab2)
			return (*tab1 - *tab2);
		tab1++;
		tab2++;
	}
	return (0);
}
