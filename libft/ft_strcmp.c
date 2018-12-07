/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfauvell <cfauvell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 17:06:46 by cfauvell          #+#    #+#             */
/*   Updated: 2018/11/15 13:41:39 by cfauvell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	size_t n;

	n = 0;
	while (s1[n] == s2[n] && s2[n] != '\0' && s1[n] != '\0')
		n++;
	return ((unsigned char)s1[n] - (unsigned char)s2[n]);
}
