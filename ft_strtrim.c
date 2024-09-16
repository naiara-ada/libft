/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narrospi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 12:37:50 by narrospi          #+#    #+#             */
/*   Updated: 2024/09/13 13:04:50 by narrospi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

static int	check_trim(const char *set, char c)
{
	int	i;
	
	i = 0;
	while (set[i] != '\0')
	{
		
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	int	i;
	int	j;
	int	z;
	char	*str;

	i = 0;
	j = ft_strlen(s1) - 1;
	while (check_trim(set, s1[i]))
	{
		i++;
	}
	while (check_trim(set, s1[j]))
		j--;
	z = 0;
	str = (char *)malloc(ft_strlen(s1) - i - (ft_strlen(s1) - j));
	if (!str)
		return (0);
	while (i <= j)
	{
		str[z] = s1[i];
		i++;
		z++;
	}
	
	return (str);
}
