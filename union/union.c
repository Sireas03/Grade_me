/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramier <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 09:20:57 by aramier           #+#    #+#             */
/*   Updated: 2023/05/30 09:20:59 by aramier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check(char c, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;
	int	o;

	i = 0;
	if (argc == 3)
	{
		while (argv[1][i])
		{
			j = 1;
			o = 0;
			while (argv[1][i - j])
			{
				if (argv[1][i] == argv[1][i - j])
				{
					o = 1;
					break ;
				}
				j++;
			}
			if (o == 0)
				write(1, &argv[1][i], 1);
			i++;
		}
		i = 0;
		while (argv[2][i])
		{
			o = 0;
			j = 1;
			while (argv[2][i - j])
			{
				if (argv[2][i] == argv[2][i - j] || 
					check(argv[2][i] == 1, argv[1]))
				{
					o = 1;
					break ;
				}
				j++;
			}
			if (o == 0)
				write(1, &argv[2][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
