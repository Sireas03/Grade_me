/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramier <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 10:03:44 by aramier           #+#    #+#             */
/*   Updated: 2023/06/12 10:03:45 by aramier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	nb;

	if (argc == 2)
	{
		i = 1;
		nb = atoi(argv[1]);
		if (nb == 1)
			printf("1");
		while (nb >= ++i)
		{
			if (nb % i == 0)
			{
				printf("%d", i);
				if (nb == i)
					break;
				printf("*");
				nb /= i;
				i = 1;
			}
		}
	}
	printf("\n");
	return (0);
}
