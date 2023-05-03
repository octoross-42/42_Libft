/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: octoross <octoross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 22:44:37 by octoross          #+#    #+#             */
/*   Updated: 2023/05/03 22:44:37 by octoross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	if (nptr[0] == ' ')
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
	return (atoied);
}
