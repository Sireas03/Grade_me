/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramier <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 09:07:30 by aramier           #+#    #+#             */
/*   Updated: 2023/06/14 09:07:32 by aramier          ###   ########.fr       */
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
	int	j;

	j = 1;
	if (argc > 1)
	{
		while (j < argc)
		{
			i = 0;
			while (argv[j][i])
			{
				if (argv[j][i] >= 'A' && argv[j][i] <= 'Z')
					argv[j][i] += 32;
				
				if ((argv[j][i + 1] == ' ' || argv[j][i + 1] == '\0') 
						&& (argv[j][i] >= 'a' && argv[j][i] <= 'z'))
					argv[j][i] -= 32;
				ft_putchar(argv[j][i]);
				i++;
			}
			write(1, "\n", 1);
		j++;
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}
