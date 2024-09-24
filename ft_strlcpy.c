/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narrospi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 14:34:20 by narrospi          #+#    #+#             */
/*   Updated: 2024/09/10 14:34:22 by narrospi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dtsize)
{
	size_t	src_size;

	src_size = ft_strlen(src);
	if (dtsize > (src_size + 1))
	{
		ft_memcpy(dest, src, src_size + 1);
	}
	else
	{
		ft_memcpy(dest, src, dtsize -1);
		dest[dtsize - 1] = '\0';
	}
	return (src_size);
}
