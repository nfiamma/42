/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfiamma <nfiamma@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 13:37:57 by nfiamma           #+#    #+#             */
/*   Updated: 2025/09/27 13:42:50 by nfiamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	if (nb < 2)
	{
		return (1);
	}
	else
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
}

/*
int	main(void)
{
	printf("Factorial de -1 = %d\n", ft_recursive_factorial(-1));
	printf("Factorial de 0 = %d\n", ft_recursive_factorial(0));
	printf("Factorial de 1 = %d\n", ft_recursive_factorial(1));
	printf("Factorial de 5 = %d\n", ft_recursive_factorial(5));
} */
