/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cast <ana-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 14:18:29 by ana-cast          #+#    #+#             */
/*   Updated: 2023/11/29 20:36:50 by ana-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	l_src;
	unsigned int	l_dest;
	unsigned int	swp;
	unsigned int	i;

	l_src = ft_strlen(src);
	l_dest = ft_strlen(dest);
	swp = l_dest;
	i = 0;
	if (size <= l_dest)
		return (size + l_src);
	while (src[i] && swp < (size - 1))
	{
		dest[swp] = src[i];
		i++;
		swp++;
	}
	dest[swp] = '\0';
	return (l_src + l_dest);
}
