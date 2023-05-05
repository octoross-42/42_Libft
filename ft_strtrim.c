/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: octoross <octoross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 22:16:03 by octoross          #+#    #+#             */
/*   Updated: 2023/05/04 22:16:03 by octoross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		i;
	char	*trimmed;

	if (!set || !s1)
		return (0);
	start = 0;
	while (ft_strchr(set, s1[start]))
		start ++;
	end = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[end]))
		end --;
	if (end - start < 0)
		end = start - 1;
	return (ft_substr(s1, (unsigned int) start, (size_t)(end - start + 1)));
}
