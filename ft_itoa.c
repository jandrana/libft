/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cast <ana-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 21:49:50 by ana-cast          #+#    #+#             */
/*   Updated: 2023/10/19 02:42:27 by ana-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	length_num(long n)
{
	int	i;

	i = 1;
	if (n < 0)
	{
		i++;
		n *= -1;
	}
	while (n > 9)
	{
		i++;
		n /= 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		len;
	long	long_n;

	long_n = (long)n;
	len = length_num(long_n);
	result = (char *)malloc(sizeof(char) * len + 1);
	if (result == NULL)
		return (NULL);
	result[len] = '\0';
	if (n < 0)
	{
		result[0] = '-';
		long_n *= -1;
	}
	else if (long_n == 0)
		result[0] = '0';
	while (long_n > 0)
	{
		result[--len] = (long_n % 10) + '0';
		long_n /= 10;
	}
	return (result);
}
