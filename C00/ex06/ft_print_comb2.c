/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfiamma <nfiamma@student.42barcelona.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 00:37:51 by nfiamma           #+#    #+#             */
/*   Updated: 2025/07/23 02:32:29 by nfiamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	salto(char a, char b, char c, char d)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
	
	if (a <= '9' && b <= '8')
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int a;
	int b;
	int c;
	int d;

	a = 0;
	b = 0;
	c = 0;
	d = 0;
	while (!(a == '9' && b == '8' && c == '9' && d == '9'))
	{
		if (d == '9')
		{
			d = 0;
			c++;
			if (c == '9')
			{
				c = 0;
				b++;
				if (b == '9')
				{
					b = 0;
					a++;
				}
			}
		}
		else
		{
			d++;
		}
		salto(a, b, c, d);
	}
}

int	main(void)
{
	ft_print_comb2();
}
