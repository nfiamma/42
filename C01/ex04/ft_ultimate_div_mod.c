/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfiamma <nfiamma@student.42barcelona.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 23:08:13 by nfiamma           #+#    #+#             */
/*   Updated: 2025/07/24 23:35:15 by nfiamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	result = *a / *b;
	int	rest = *a % *b;

	*a = result;
	*b = rest;
}

/* int	main(void)
{
	int	v1 = 45;
	int	v2 = 5;
	int	*a = &v1;
	int	*b = &v2;

	ft_ultimate_div_mod(a, b);

	printf("El resultado de la division es %d y el resto %d", *a, *b);
	return 0;
}*/
