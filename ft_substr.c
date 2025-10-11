/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eina <eina@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 16:01:03 by eina              #+#    #+#             */
/*   Updated: 2025/10/11 11:53:31 by eina             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*newstr;
	size_t	i;
	size_t	slen;

	slen = ft_strlen(s);
	i = 0;
	if (!s)
		return (NULL);
	if (start > slen)
	{
		newstr = malloc(sizeof(char) * 1);
		if (!newstr)
			return (NULL);
		newstr[0] = '\0';
		return (newstr);
	}
	newstr = malloc(sizeof(char) * len + 1);
	if (len > slen - start)
		len = slen - start;
	if (!newstr)
		return (NULL);
	while (i < len)
		newstr[i++] = s[start++];
	newstr[i] = '\0';
	return (newstr);
}
