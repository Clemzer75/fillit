/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfauvell <cfauvell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 19:36:05 by cfauvell          #+#    #+#             */
/*   Updated: 2018/11/15 13:33:17 by cfauvell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	index;
	size_t	i;
	size_t	j;
	size_t	k;

	i = ft_strlen(src);
	j = ft_strlen(dst);
	index = i + j;
	if (size < j)
		index = size + i;
	k = 0;
	if (size != 0)
		size = size - 1;
	while (j < index && j < size && src[k] != '\0')
	{
		dst[j] = src[k];
		k++;
		j++;
	}
	dst[j] = '\0';
	return (index);
}
