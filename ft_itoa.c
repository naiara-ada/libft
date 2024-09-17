/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narrospi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 11:15:11 by narrospi          #+#    #+#             */
/*   Updated: 2024/09/17 11:43:19 by narrospi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static int	count_digits(int num)
{
	int	count;

	count = 0;
	if (num < 0)
	{
		count++;
		num *= -1;
	}
	if (num == 0)
		return (1);
	while (num != 0)
	{
		num = num / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		len;
	int		i;
	
	len = count_digits(n);
	result = malloc((len + 1) * sizeof(char));
	if (!result)
		return (0);
	if (n == 0)
		result[0] = '0';
	if (n < 0)
	{
		result[0] = '-';
		n *= -1;
	}
	i = len - 1;
	while(n != 0)
	{
		result[i] = (n % 10) + '0';
		n = n / 10;
		i--;
	}
	result[len] = '\0';
	printf("result: %s\n", result);
	return(result);
}
