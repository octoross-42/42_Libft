/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: octoross <octoross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 23:00:32 by octoross          #+#    #+#             */
/*   Updated: 2023/05/03 23:00:32 by octoross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*duplicate;
	int		i;

	if (!s)
		return (0);
	duplicate = (char *)malloc(sizeof(char) * ft_strlen(s));
	if (!duplicate)
		return (0);
	i = 0;
	while (s[i])
		duplicate[i] = s[i++];
	return (duplicate);
}
