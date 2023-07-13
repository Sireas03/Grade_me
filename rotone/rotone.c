/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramier <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 10:39:54 by aramier           #+#    #+#             */
/*   Updated: 2023/06/14 10:39:55 by aramier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				if (argv[1][i] >= 'a' && argv[1][i] < 'z')
					ft_putchar(argv[1][i] + 1);
				else if (argv[1][i] == 'z')
					ft_putchar('a');
			}
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				if (argv[1][i] >= 'A' && argv[1][i] < 'Z')
					ft_putchar(argv[1][i] + 1);
				else if (argv[1][i] == 'Z')
					ft_putchar('A');
			}
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
