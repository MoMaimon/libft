/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strdup.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: mabd-elh <mabd-elh@student.42amman.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/26 20:51:42 by mabd-elh         #+#    #+#              */
/*   Updated: 2026/09/26 21:15:30 by mabd-elh        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;
	int		len;

	len = ft_strlen(s) + 1;
	dup = malloc(len);
	ft_strlcpy(dup, s, len);
	return (dup);
}
