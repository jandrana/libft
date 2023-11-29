/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cast <ana-cast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 18:48:21 by ana-cast          #+#    #+#             */
/*   Updated: 2023/11/29 20:37:46 by ana-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static void	memory_leak(char **result, int j)
{
	while (--j >= 0)
		free(result[j]);
	free(result);
}

static int	how_many(char const *s, char c)
{
	int	i;
	int	counter;
	int	b_check;

	counter = 0;
	i = 0;
	b_check = 0;
	while (s[i])
	{
		if (s[i] != c && b_check == 0)
		{
			b_check = 1;
			counter++;
		}
		else if (s[i] == c)
			b_check = 0;
		i++;
	}
	return (counter);
}

static void	position_start_end(char const *s, int *start, int *end, char c)
{
	while (s[*start] == c)
		*start += 1;
	*end = *start;
	while (s[*end] && s[*end] != c)
		*end += 1;
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		start;
	int		end;
	int		j;

	result = (char **)malloc(sizeof(char *) * (how_many(s, c) + 1));
	if (!result || !s)
		return (NULL);
	start = 0;
	j = 0;
	while (s[start])
	{
		position_start_end(s, &start, &end, c);
		if (s[end] == c || end > start)
		{
			result[j] = ft_substr(s, start, end - start);
			if (!result[j])
				return (memory_leak(result, j), NULL);
			start = end;
			j++;
		}
	}
	result[j] = NULL;
	return (result);
}
