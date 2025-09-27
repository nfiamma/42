/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfiamma <nfiamma@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 14:25:42 by nfiamma           #+#    #+#             */
/*   Updated: 2025/09/27 14:40:05 by nfiamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/* int	main(void)
{
	char	*s1 = "hola";
	char	*s2 = "Hola";

	printf("Funcion original: %d\n", strcmp(s1, s2));
	printf("Recreacion de funcion: %d\n", ft_strcmp(s1, s2));
} */
