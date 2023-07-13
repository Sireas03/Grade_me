/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramier <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 09:15:43 by aramier           #+#    #+#             */
/*   Updated: 2023/06/19 09:15:44 by aramier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	j;
	j = 1;
	if (argc > 1)
	{
		while (j < argc)
		{
			i = 0;
			while (argv[j][i])
			{
				if ((argv[j][i - 1] == ' ' || argv[j][i - 1] == '	' || argv[j][i - 1] == 0) && (argv[j][i] >= 'a' && argv[j][i] <= 'z'))
					argv[j][i] -= 32;
				if ((argv[j][i - 1] != ' ' && argv[j][i - 1] != '	' && argv[j][i - 1] != 0) && (argv[j][i] >= 'A' && argv[j][i] <= 'Z'))
					argv[j][i] += 32;
				write(1, &argv[j][i], 1);
				i++;
			}
			write(1, "\n", 1);
			j += 1;
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}
