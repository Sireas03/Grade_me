/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramier <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 13:50:46 by aramier           #+#    #+#             */
/*   Updated: 2023/06/01 13:50:47 by aramier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putnbr(int	nb)
{
	char	str[10] = "0123456789";

	if (nb > 9)
		ft_putnbr(nb / 10);
	write(1, &str[nb % 10], 1);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	nb;
	int	res;

	i = 1;
	res = 0;
	if (argc == 2)
	{
		nb = atoi(argv[1]);
		if (nb >= 0)
		{
			while (i < 10)
			{
				res = i * nb;
				ft_putnbr(i);
				write(1, " x ", 3);
				ft_putnbr(nb);
				write(1, " = ", 3);
				ft_putnbr(res);
				write(1, "\n", 1);
				i++;
			}
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}
	
