/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfiamma <nfiamma@student.42barcelona.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 21:36:44 by nfiamma           #+#    #+#             */
/*   Updated: 2025/09/23 21:58:07 by nfiamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	c;

	c = 'a';
	while(c <= 'z')
	{
		write(1, &c, 1);
		c++;
	}
}

/* int	main(void)
{
	ft_print_alphabet();
} */
