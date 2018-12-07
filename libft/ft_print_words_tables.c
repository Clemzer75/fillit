/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfauvell <cfauvell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 21:31:40 by cfauvell          #+#    #+#             */
/*   Updated: 2018/11/16 21:35:41 by cfauvell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_words_tables(char **str)
{
	int i;
	int j;

	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i][j])
		{
			ft_putchar(str[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
