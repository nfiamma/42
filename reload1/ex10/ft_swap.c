/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfiamma <nfiamma@student.42barcelona.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 20:11:07 by nfiamma           #+#    #+#             */
/*   Updated: 2025/09/24 20:21:38 by nfiamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/* int	main(void)
{
	int a;
	int b;

	a = 6;
	b = 7;
	printf("Antes: %d, %d\n", a, b);
	ft_swap(&a, &b);
	printf("Despues: %d, %d\n", a, b);
} */
