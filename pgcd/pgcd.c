/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramier <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 15:06:03 by aramier           #+#    #+#             */
/*   Updated: 2023/06/13 15:06:04 by aramier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	res;

	i = 1;
	res = 0;
	if (argc == 3)
	{
		while (i <= atoi(argv[1]) && i <= atoi(argv[2]))
		{
			if (atoi(argv[1]) % i == 0 && atoi(argv[2]) % i == 0)
				res = i;
			i++;
		}
		printf("%d", res);
	}
	printf("\n");
	return (0);
}
