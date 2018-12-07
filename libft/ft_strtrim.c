/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfauvell <cfauvell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 10:21:51 by cfauvell          #+#    #+#             */
/*   Updated: 2018/11/13 19:43:30 by cfauvell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*str;
	size_t	i;
	size_t	end;

	if (s)
	{
		i = 0;
		end = ft_strlen(s) - 1;
		while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
			i++;
		while (s[end] == ' ' || s[end] == '\n' || s[end] == '\t')
			end--;
		if (!(str = ft_strndup(s + i, (end + 1) - i)))
			return (0);
		return (str);
	}
	else
		return (0);
}
