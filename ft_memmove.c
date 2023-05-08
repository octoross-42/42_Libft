/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: octoross <octoross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 21:30:55 by octoross          #+#    #+#             */
/*   Updated: 2023/05/08 15:56:35 by octoross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char const	*from;
	unsigned char		*to;

	if (!dest || !src)
		return (NULL);
	from = (unsigned char const *)src;
	to = (unsigned char *)dest;
	if (n == 0)
		return (dest);
	if (from < to)
	{
		while (n > 0)
		{
			n --;
			to[n] = from[n];
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}

// int	main(int argc, char **argv)
// {
// 	if (argc > 3)
// 		printf("'%s'\n", (char *)ft_memmove(argv[1], argv[2], atoi(argv[3])));
// 	return (0);
// }