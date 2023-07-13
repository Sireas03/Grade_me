/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramier <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 15:28:58 by aramier           #+#    #+#             */
/*   Updated: 2023/06/12 15:28:59 by aramier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putnbr(int nb)
{
	char str[10] = "0123456789";

	if (nb > 9)
		ft_putnbr(nb / 10);
	write(1, &str[nb % 10], 1);
}

int	main(int argc, char *argv[])
{
	(void)argv;
	int	i;

	i = argc - 1;
	ft_putnbr(i);
	write(1, "\n", 1);
	return (0);
}
