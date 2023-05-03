/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: octoross <octoross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 22:37:56 by octoross          #+#    #+#             */
/*   Updated: 2023/05/03 22:37:56 by octoross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (0);
	if (ft_strlen(s2) > n)
		return (0);
	i = 0;
	while (s1[i] && i < n)
	{
		j = 0;
		while (i + j < n && s1[i + j] == s2[j])
			j ++;
		if (!s2[j])
			return (&(s1[i]));
		i ++;
	}
	return (0);
}
