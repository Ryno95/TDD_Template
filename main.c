/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: rmeiboom <rmeiboom@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/22 10:02:02 by rmeiboom      #+#    #+#                 */
/*   Updated: 2022/03/10 21:50:43 by rmeiboom      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "src/ft_math.h"

int	main(int argc, char *argv[])
{
	int	squared;

	if (argc != 2)
		return (INVALID_INPUT);
	squared = ft_square(atoi(argv[1]));
	printf("%d\n", squared);
	return (0);
}
