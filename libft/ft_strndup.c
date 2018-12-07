/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfauvell <cfauvell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 19:31:18 by cfauvell          #+#    #+#             */
/*   Updated: 2018/11/15 13:40:48 by cfauvell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s1, size_t n)
{
	char	*src2;
	size_t	i;

	if (!(src2 = (char *)malloc(sizeof(char) * (ft_strnlen(s1, n) + 1))))
		return (0);
	i = 0;
	while (s1[i] && i < n)
	{
		src2[i] = s1[i];
		i++;
	}
	src2[i] = '\0';
	return (src2);
}
