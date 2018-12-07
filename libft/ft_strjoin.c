/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfauvell <cfauvell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 15:41:28 by cfauvell          #+#    #+#             */
/*   Updated: 2018/11/27 15:52:41 by cfauvell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*str;

	if (s1 && s2)
	{
		len = ft_strlen(s1) + ft_strlen(s2);
		if (!(str = (char *)malloc(sizeof(char) * len + 1)))
			return (0);
		ft_strcpy(str, s1);
		ft_strcat(str, s2);
		return (str);
	}
	else
		return (0);
}
