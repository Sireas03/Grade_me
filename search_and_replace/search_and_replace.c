/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramier <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 09:17:48 by aramier           #+#    #+#             */
/*   Updated: 2023/05/31 09:17:49 by aramier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	if (argc == 4 && !argv[2][1] && !argv[3][1])
	{
		char	s;
		char	r;
	
		s = argv[2][0];
		r = argv[3][0];
		while (argv[1][i])
		{
			if (argv[1][i] == s)
				write(1, &r, 1);
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
