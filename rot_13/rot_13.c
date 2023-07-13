/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramier <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 09:05:15 by aramier           #+#    #+#             */
/*   Updated: 2023/06/19 09:05:16 by aramier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'm')
			{
				argv[1][i] += 13;
				write(1, &argv[1][i], 1);
			}
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'M')
			{
				argv[1][i] += 13;
				write(1, &argv[1][i], 1);
			}
			else if (argv[1][i] > 'm' && argv[1][i] <= 'z')
			{
				argv[1][i] -= 13;
				write(1, &argv[1][i], 1);
			}
			else if (argv[1][i] > 'M' && argv[1][i] <= 'Z')
			{
				argv[1][i] -= 13;
				write(1, &argv[1][i], 1);
			}
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
