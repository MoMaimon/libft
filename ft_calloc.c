/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_calloc.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: mabd-elh <mabd-elh@student.42amman.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/26 19:47:15 by mabd-elh         #+#    #+#              */
/*   Updated: 2026/09/26 20:46:53 by mabd-elh        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	int		bytes;

	bytes = nmemb * size;
	if (size != 0)
	{
		if (bytes / size != nmemb)
			return (0);
	}
	ptr = malloc(bytes);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}
