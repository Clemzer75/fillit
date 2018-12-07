/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfauvell <cfauvell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 11:38:17 by cfauvell          #+#    #+#             */
/*   Updated: 2018/11/23 08:03:44 by cfauvell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strclen(const char *s, int c)
{
	size_t i;

	i = 0;
	while (s[i] && s[i] != (unsigned char)c)
		i++;
	return (i);
}
