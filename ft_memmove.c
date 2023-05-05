/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: octoross <octoross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 21:30:55 by octoross          #+#    #+#             */
/*   Updated: 2023/05/05 21:04:45 by octoross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char const	*from;
	char		*to;
	size_t		i;

	if (!dest || !src)
		return (NULL);
	from = (char const *)src;
	to = (char *)dest;
	if (n == 0 || dest == src)
		return (dest);
	if (0 < (to - from) && (to - from) < (unsigned int)n)
	{
		i = n;
		while (--i >= 0)
			to[i] = from[i];
	}
	else
	{
		i = 0;
		while (i++ < n)
			to[i - 1] = from[i - 1];
	}
	return (dest);
}

// int	main(int argc, char **argv)
// {
// 	if (argc > 3)
// 		printf("'%s'\n", (char *)ft_memmove(argv[1], argv[2], atoi(argv[3])));
// 	return (0);
// }