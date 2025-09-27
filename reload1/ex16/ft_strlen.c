/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfiamma <nfiamma@student.42barcelona.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 21:15:40 by nfiamma           #+#    #+#             */
/*   Updated: 2025/09/27 12:59:53 by nfiamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

/* int	main(void)
{
	int i;
	char str[9] = "School42";

	i = ft_strlen(str);
	printf("The strng %s is %d characters long\n", str, i);
	return (0);
} */
