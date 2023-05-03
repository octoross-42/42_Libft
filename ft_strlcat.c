/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: octoross <octoross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 22:02:32 by octoross          #+#    #+#             */
/*   Updated: 2023/05/03 22:02:32 by octoross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t size)
{
	size_t	i;
	size_t	len;
	size_t	len_src;

	len_src = ft_strlen(src);
	i = 0;
	len = 0;
	while (len < size && dst[len])
		len ++;
	while (src[i] && len + i + 1 < size)
	{
		dst[len + i] = src[i];
		i ++;
	}
	if (len < size)
		dst[len + i] = '\0';
	return (len_src + len);
}
