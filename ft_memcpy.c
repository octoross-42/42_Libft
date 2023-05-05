/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: octoross <octoross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 21:29:37 by octoross          #+#    #+#             */
/*   Updated: 2023/05/05 21:18:26 by octoross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	const char	*from;
	char		*to;

	if (!dest)
		return (NULL);
	if (!src)
		return (dest);
	from = src;
	to = dest;
	i = 0;
	while (i < n)
	{
		to[i] = from[i];
		i ++;
	}
	return (dest);
}

// int	main(int argc, char **argv)
// {
// 	if (argc > 3)
// 		printf("'%s'\n", (char *)ft_memcpy(argv[1], argv[2], atoi(argv[3])));
// 	return (0);
// }