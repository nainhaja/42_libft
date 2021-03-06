/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nainhaja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 20:58:30 by nainhaja          #+#    #+#             */
/*   Updated: 2019/10/19 22:29:14 by nainhaja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*t;
	int		i;

	t = lst;
	i = 0;
	while (t != NULL)
	{
		i++;
		t = t->next;
	}
	return (i);
}
