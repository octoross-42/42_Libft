/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: octoross <octoross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 21:49:21 by octoross          #+#    #+#             */
/*   Updated: 2023/05/05 21:46:38 by octoross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*extracted;
	size_t	i;
	size_t	true_len;

	if (!s || start >= ft_strlen(s))
		return (0);
	true_len = 0;
	while (s[start + true_len] && true_len < len)
		true_len ++;
	if (!s)
		return (NULL);
	extracted = (char *)malloc(sizeof(char) * (true_len + 1));
	if (!extracted)
		return (NULL);
	extracted[true_len] = '\0';
	i = 0;
	while (i < true_len)
	{
		extracted[i] = s[start + i];
		i ++;
	}
	return (extracted);
}

// int	main(int argc, char **argv)
// {
// 	if (argc > 3)
// 	{
// 		char const *s1 = argv[1];
// 		unsigned int start = atoi(argv[2]);
// 		size_t len = atoi(argv[3]);
// 		char *return_type = ft_substr(s1, start, len);
// 		printf("'%s'\n", return_type);
// 		free(return_type);
// 	}
// 	return (0);
// }