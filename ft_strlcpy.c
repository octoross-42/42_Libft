/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: octoross <octoross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 22:06:01 by octoross          #+#    #+#             */
/*   Updated: 2023/05/05 18:18:40 by octoross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	if (!dst || !src)
		return (0);
	if (size > 0)
	{
		i = 0;
		while (src[i] && i < (size - 1))
		{
			dst[i] = src[i];
			i ++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}

// #include "bsd/string.h"

// int	main(int argc, char **argv)
// {
// 	if (argc > 5)
// 	{
// 		char *dst = argv[1];
// 		char *src = argv[2];
// 		size_t return_type = ft_strlcpy(dst, src, atoi(argv[3]));
// 		printf("%zu '%s' '%s'\n", return_type, dst, src);
// 		char *dst_ref = argv[4];
// 		char *src_ref = argv[5];
// 		printf("%zu '%s' '%s'\n", ft_strlcpy(dst_ref, src_ref, atoi(argv[3])), dst_ref, src_ref);
// 	}
// 	return (0);
// }