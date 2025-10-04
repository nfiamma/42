/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfiamma <nfiamma@student.42barcelona.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 15:39:57 by nfiamma           #+#    #+#             */
/*   Updated: 2025/10/04 17:38:49 by nfiamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_POINT_H
# define FT_POINT_H

# include <unistd.h>

// Defines a structure
// Structures may contain variables that can be assigned after
typedef struct s_point
{
	int	x;
	int	y;

// t_point is the name for quick call of the s_point structure
}			t_point;

void	set_point(t_point *point);

#endif
