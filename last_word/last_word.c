/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramier <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 09:14:15 by aramier           #+#    #+#             */
/*   Updated: 2023/06/12 09:14:16 by aramier          ###   ########.fr       */
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
			i++;
		while (argv[1][i] == ' ' || argv[1][i] == '	' || argv[1][i] == '\0')
			i--;
		while (argv[1][i] != ' ' && argv[1][i] != '	' && argv[1][i] != 0)
			i--;
		i += 1;
		while (argv[1][i] != ' ' && argv[1][i] != '	' && argv[1][i] != '\0')
		{
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
