/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_split.c                                        :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: mabd-elh <mabd-elh@student.42amman.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/27 13:52:21 by mabd-elh         #+#    #+#              */
/*   Updated: 2026/09/27 16:21:07 by mabd-elh        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *str, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 1;
	if (!str[i])
		return (0);
	i++;
	while (str[i])
	{
		if (str[i] != c && str[i - 1] == c)
			words++;
		i++;
	}
	return (words);
}

static int	word_len(const char *left, const char *right)
{
	int	len;

	len = (long) right - (long) left;
	return (len);
}

static char	*get_word(char *s, char c)
{
	char	*sep;
	char	*str;
	int		len;

	sep = ft_strchr(s, c);
	if (sep)
		len = word_len(s, sep) + 1;
	else
		len = ft_strlen(s) + 1;
	str = malloc(len * sizeof(char));
	ft_strlcpy(str, s, len);
	return (str);
}

static void	make_arr(char **arr, char *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (s[i])
		arr[j++] = get_word(&s[i++], c);
	while (s[i])
	{
		if (s[i] != c && s[i - 1] == c)
			arr[j++] = get_word(&s[i], c);
		i++;
	}
	arr[j] = 0;
}

char	**ft_split(char const *s, char c)
{
	char	*trimmed_str;
	int		words;
	char	**arr;
	char	set[2];

	set[0] = c;
	set[1] = '\0';
	trimmed_str = ft_strtrim(s, set);
	words = count_words(trimmed_str, c);
	arr = malloc((words + 1) * sizeof(char *));
	make_arr(arr, trimmed_str, c);
	free(trimmed_str);
	return (arr);
}
