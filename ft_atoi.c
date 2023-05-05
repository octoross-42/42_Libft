/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: octoross <octoross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 22:44:37 by octoross          #+#    #+#             */
/*   Updated: 2023/05/05 20:36:08 by octoross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	atoied;
	int	i;

	if (!nptr)
		return (0);
	i = 0;
	sign = 1;
	atoied = 0;
	while ((9 <= nptr[i] && nptr[i] <= 13) || nptr[i] == ' ')
		i ++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign *= -1;
		i ++;
	}
	while (ft_isdigit(nptr[i]))
	{
		atoied = atoied * 10 + (nptr[i] - '0');
		i ++;
	}
	return (atoied * sign);
}

// int	main(int argc, char **argv)
// {
// 	if (argc > 1)
// 	{
// 		const char *nptr = argv[1];
// 		int return_type = ft_atoi(nptr);
// 		printf("%d ", return_type);
// 	}
// 	return (0);
// }