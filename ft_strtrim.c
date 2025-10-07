/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eina <eina@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 16:00:45 by eina              #+#    #+#             */
/*   Updated: 2025/10/07 16:11:25 by eina             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*newstr;
	size_t	s1_len;
	size_t	set_len;
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	start;

	if (!s1)
		return (NULL);
	s1_len = ft_strlen(s1);
	set_len = ft_strlen(set);
	i = 0;
	while (s1 && s1[i] && set[i] && i < set_len && i < s1_len)
	{
		if (s1[i] == set[i])
			i++;
		else
			break ;
	}
	start = i;
    j = 0;
	k = set_len -1;
	while (s1 && s1[k] && set[j] && j < set_len && i < s1_len) 
	{
		if ()
	}
}
