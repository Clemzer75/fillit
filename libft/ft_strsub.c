/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfauvell <cfauvell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 15:04:17 by cfauvell          #+#    #+#             */
/*   Updated: 2018/11/14 14:55:36 by cfauvell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	if (s)
	{
		if (!(str = (char *)malloc(sizeof(char) * len + 1)))
			return (0);
		str[len] = '\0';
		i = 0;
		while (len--)
		{
			str[i] = s[start];
			i++;
			start++;
		}
		return (str);
	}
	else
		return (0);
}
