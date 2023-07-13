/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramier <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 11:06:41 by aramier           #+#    #+#             */
/*   Updated: 2023/06/14 11:06:42 by aramier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	start;
	int	end;

	i = 0;
	start = 0;
	end = 0;
	if (argc == 2)
	{
		while (argv[1][i])
			i++;
		i -= 1;
		while (i >= 0)
		{
			while (argv[1][i] == ' ' || argv[1][i] == '	')
				i--;
			end = i;
			while (argv[1][i] != ' ' && argv[1][i] != '	' && i >= 0)
				i--;
			start = i + 1;
			while (start <= end && start >= 0)
			{
				write(1, &argv[1][start], 1);
				start++;
			}
			i--;
			if (argv[1][i] != ' ' && i > 0)
				write(1, " ", 1);
		}
	}
	write(1, "\n", 1);
	return (0);
}				
