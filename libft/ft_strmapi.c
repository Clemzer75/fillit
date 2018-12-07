/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfauvell <cfauvell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 12:46:52 by cfauvell          #+#    #+#             */
/*   Updated: 2018/11/13 16:22:32 by cfauvell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	size_t			size;
	unsigned int	i;

	if (s)
	{
		size = ft_strlen(s);
		i = 0;
		if (!(str = (char *)malloc(sizeof(char) * size + 1)))
			return (0);
		while (s[i])
		{
			str[i] = (*f)(i, s[i]);
			i++;
		}
		str[size] = '\0';
		return (str);
	}
	else
		return (0);
}
