/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_substr.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: mabd-elh <mabd-elh@student.42amman.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/26 21:19:05 by mabd-elh         #+#    #+#              */
/*   Updated: 2026/09/26 21:54:57 by mabd-elh        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	min(int num1, int num2)
{
	if (num1 < num2)
		return (num1);
	return (num2);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;
	size_t	min_len;

	i = 0;
	min_len = min(len, ft_strlen(&s[start]));
	str = calloc(min_len + 1, sizeof(char));
	if (!str)
		return (0);
	while (i < min_len && s[i])
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}

#include <stdio.h>

int	main(void)
{
	char	*s = ft_substr("tripouille", 100, 1);

	printf("%s", s);
}
