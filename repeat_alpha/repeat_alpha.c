/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramier <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 16:03:48 by aramier           #+#    #+#             */
/*   Updated: 2023/06/13 16:03:49 by aramier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c, int n)
{
	int	i;

	i = 0;
	while (i <= n)
	{
		write(1, &c, 1);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				n = argv[1][i] - 97;
				ft_putchar(argv[1][i], n);
			}
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				n = argv[1][i] - 65;
				ft_putchar(argv[1][i], n);
			}
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
