/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: octoross <octoross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 22:02:32 by octoross          #+#    #+#             */
/*   Updated: 2023/05/05 18:25:02 by octoross         ###   ########.fr       */
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

// #include "bsd/string.h"

// int	main(int argc, char **argv)
// {
// 	if (argc > 5)
// 	{
// 		char *dst = argv[1];
// 		char *src = argv[2];
// 		size_t return_type = ft_strlcat(dst, src, atoi(argv[3]));
// 		printf("%zu '%s' '%s'\n", return_type, dst, src);
// 		char *dst_ref = argv[4];
// 		char *src_ref = argv[5];
// 		printf("%zu '%s' '%s'\n", 
//			strlcat(dst_ref, src_ref, atoi(argv[3])), dst_ref, src_ref);
// 	}
// 	return (0);
// }