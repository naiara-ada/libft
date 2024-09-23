/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narrospi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 14:06:51 by narrospi          #+#    #+#             */
/*   Updated: 2024/09/23 14:11:57 by narrospi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;
	t_list	*lst_copy;

	lst_copy = lst;
	i = 0;
	while (lst_copy)
	{
		lst_copy = lst_copy -> next;
		i++;
	}
	return (i);
}
