/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfauvell <cfauvell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 16:16:20 by cfauvell          #+#    #+#             */
/*   Updated: 2018/11/17 17:59:57 by cfauvell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hk, const char *ne, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*ne == '\0')
		return ((char *)hk);
	while (hk[i] && i < len)
	{
		j = 0;
		while (ne[j] == hk[i + j] && (i + j) < len)
		{
			if (ne[j + 1] == '\0')
				return ((char *)(hk + i));
			j++;
		}
		i++;
	}
	return (0);
}
