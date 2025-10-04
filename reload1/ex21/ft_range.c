/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfiamma <nfiamma@student.42barcelona.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 17:51:52 by nfiamma           #+#    #+#             */
/*   Updated: 2025/10/04 17:02:18 by nfiamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*m;

	if (max <= min)
		return (NULL);
	m = malloc(sizeof(int) * (max - min));
	if (!m)
		return (NULL);
	i = 0;
	while (min < max)
	{
		m[i] = min;
		min++;
		i++;
	}
	return (m);
}
