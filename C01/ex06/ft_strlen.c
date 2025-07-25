/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfiamma <nfiamma@student.42barcelona.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 00:37:34 by nfiamma           #+#    #+#             */
/*   Updated: 2025/07/25 01:11:07 by nfiamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;

	while(str[i] != '\0')
	{
		i++;
	}

	return i;
}

/* int	main(void)
{
	int	largo;
	char	*str = "Fentanilo";

	largo = ft_strlen(str);
	printf("Tu string tiene %d caracteres\n", largo);
	return 0;
}*/
