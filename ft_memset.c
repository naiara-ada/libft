/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narrospi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 11:16:57 by narrospi          #+#    #+#             */
/*   Updated: 2024/09/10 11:43:33 by narrospi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	i;
	unsigned char	*str_copy;

	i = 0;
	str_copy = str;
	while (i < n)
	{
		str_copy[i] = c;
		i++;
	}
	return (str_copy);
}

