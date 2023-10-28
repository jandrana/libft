/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cast <ana-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 14:10:35 by ana-cast          #+#    #+#             */
/*   Updated: 2023/09/15 17:01:25 by ana-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcpy(char *dest, char *src, size_t size)
{
	unsigned int	x;
	unsigned int	y;
	unsigned int	sizes;

	x = 0;
	y = 0;
	sizes = size - 1;
	while (src[x])
		x++;
	while (src[y] && y < sizes && size != 0 && sizes != 0)
	{
		dest[y] = src[y];
		y++;
	}
	if (size != 0)
		dest[y] = '\0';
	return (x);
}
