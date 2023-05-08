/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: octoross <octoross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 21:49:50 by octoross          #+#    #+#             */
/*   Updated: 2023/05/05 21:54:49 by octoross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	size_t	i;
	char	*map;

	if (!s)
		return (0);
	len = ft_strlen(s);
	map = (char *)malloc(sizeof(char) * (len + 1));
	if (!map)
		return (0);
	map[len] = '\0';
	i = 0;
	while (i < len)
	{
		map[i] = f((unsigned int)i, (char)s[i]);
		i ++;
	}
	return (map);
}
