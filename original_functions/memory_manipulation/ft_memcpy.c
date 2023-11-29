/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cast <ana-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 18:35:41 by ana-cast          #+#    #+#             */
/*   Updated: 2023/11/29 20:36:22 by ana-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr_src;
	unsigned char	*ptr_dest;
	unsigned int	y;

	if (!dest && !src)
		return (NULL);
	ptr_src = (unsigned char *)src;
	ptr_dest = (unsigned char *)dest;
	y = 0;
	while (y < n)
	{
		ptr_dest[y] = ptr_src[y];
		y++;
	}
	return (dest);
}
