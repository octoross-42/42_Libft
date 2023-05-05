/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: octoross <octoross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 22:34:46 by octoross          #+#    #+#             */
/*   Updated: 2023/05/04 22:34:46 by octoross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**free_until(char **tab, size_t index)
{
	size_t	i;

	i = 0;
	while (i < index)
		free(tab[i++]);
	free(tab);
	return (0);
}

size_t	ft_nbr_words(char const *s, char c)
{
	size_t	nbr_words;
	size_t	i;

	nbr_words = 0;
	i = 0;
	while (s[i] == c)
		i ++;
	while (s[i])
	{
		nbr_words ++;
		while (s[i] != c)
			i ++;
		while (s[i] == c)
			i ++;
	}
	return (nbr_words);
}

char	**ft_split(char const *s, char c)
{
	size_t	nbr_words;
	size_t	i;
	size_t	len;
	char	**splited;

	if (!s)
		return (0);
	nbr_words = ft_nbr_words(s, c);
	splited = (char **)malloc(sizeof(char *) * (nbr_words + 1));
	if (!splited)
		return (0);
	splited[nbr_words] = 0;
	i = 
	nbr_words = 0;
	while (s[i])
	{
		splited[nbr_words] = 0;
		if (!splited[nbr_words])
			return (free_until(splited, nbr_words));
		while (s[i] == c)
			i ++;
		nbr_words ++;
	}
	return (splited);
}
