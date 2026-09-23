/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-elh <mabd-elh@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 12:01:54 by mabd-elh          #+#    #+#             */
/*   Updated: 2026/09/23 12:57:08 by mabd-elh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	buffer[1000];

	i = 0;
	while (i < n)
	{
		buffer[i] = ((char *) src)[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		((char *) dest)[i] = buffer[i];
		i++;
	}
	return (dest);
}
