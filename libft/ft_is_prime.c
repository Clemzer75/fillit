/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfauvell <cfauvell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 19:23:58 by cfauvell          #+#    #+#             */
/*   Updated: 2018/11/16 22:45:17 by cfauvell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int i;
	int fin;

	i = 3;
	fin = nb / 2;
	if (nb < 0)
		return (0);
	if (nb == 2)
		return (1);
	if (nb == 0 || nb == 1 || nb % 2 == 0)
		return (0);
	while (i < fin)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}
