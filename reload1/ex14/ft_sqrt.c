/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfiamma <nfiamma@student.42barcelona.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 20:43:55 by nfiamma           #+#    #+#             */
/*   Updated: 2025/09/25 20:55:52 by nfiamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	number;

	number = 1;
	if (nb > 0)
	{
		while (number * number <= nb)
		{
			if (number * number == nb)
				return (number);
			else if (number >= 46341)
				return (0);
			number++;
		}
	}
	return (0);
}
