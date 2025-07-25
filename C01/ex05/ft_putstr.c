/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfiamma <nfiamma@student.42barcelona.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 23:37:25 by nfiamma           #+#    #+#             */
/*   Updated: 2025/07/25 00:36:55 by nfiamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;

	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

/* int	main(void)
{
	char	*str = "Fentanilo";

	ft_putstr(str);
	return 0;
}*/
