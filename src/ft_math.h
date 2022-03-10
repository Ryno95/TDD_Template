/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_math.h                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rmeiboom <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/10 21:51:08 by rmeiboom      #+#    #+#                 */
/*   Updated: 2022/03/10 21:51:52 by rmeiboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MATH_H
# define FT_MATH_H

typedef enum e_exit_codes
{
	SUCCESS,
	INVALID_INPUT
}	t_exit_codes;

int	ft_square(const int num_to_sqaure);

#endif