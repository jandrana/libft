/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cast <ana-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:52:25 by ana-cast          #+#    #+#             */
/*   Updated: 2023/11/29 20:37:19 by ana-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t l)
{
	size_t	i;
	size_t	j;
	size_t	swp;

	i = 0;
	if (!needle[0])
		return ((char *)haystack);
	while (haystack[i] && i < l)
	{
		j = 0;
		swp = i;
		while (haystack[i] == needle[j] && haystack[i] && i < l)
		{
			j++;
			i++;
		}
		if (!needle[j])
			return ((char *)(&haystack[swp]));
		i = swp + 1;
	}
	return (NULL);
}
