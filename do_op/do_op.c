/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramier <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 15:09:21 by aramier           #+#    #+#             */
/*   Updated: 2023/06/12 15:09:22 by aramier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	int	s1;
	int	s2;
	int	o;

	if (argc == 4)
	{
		s1 = atoi(argv[1]);
		s2 = atoi(argv[3]);
		o = argv[2][0];
		if (o == '*')
			printf("%d", s1 * s2);
		else if (o == '/')
			printf("%d", s1 / s2);
		else if (o == '-')
			printf("%d", s1 - s2);
		else if (o == '+')
			printf("%d", s1 + s2);
		else if (o == '%')
			printf("%d", s1 % s2);
	}
	printf("\n");
	return (0);
}
