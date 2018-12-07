/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfauvell <cfauvell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 16:34:42 by cfauvell          #+#    #+#             */
/*   Updated: 2018/11/16 22:48:29 by cfauvell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *list, void (*f)(t_list *elem))
{
	if (!list)
		return ;
	if (list->next)
		ft_lstiter(list->next, f);
	f(list);
}
