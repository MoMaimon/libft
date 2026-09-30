/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strchr.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: mabd-elh <mabd-elh@student.42amman.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/23 12:09:01 by mabd-elh         #+#    #+#              */
/*   Updated: 2026/09/30 19:36:45 by mabd-elh        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (unsigned char) c)
			return ((char *) & (s[i]));
		i++;
	}
	if (c == 0)
		return ((char *) & (s[i]));
	return (0);
}
