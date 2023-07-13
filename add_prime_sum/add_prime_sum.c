/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramier <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 16:24:38 by aramier           #+#    #+#             */
/*   Updated: 2023/06/13 16:24:38 by aramier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	f_isprime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (nb);
}

void	number(int nb)
{
	char str[10] = "0123456789";

	if (nb > 9)
		number(nb / 10);
	write(1, &str[nb % 10], 1);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	sum;

	i = 0;
	sum = 0;
	if (argc == 2)
	{
		while (i <= atoi(argv[1]))
		{
			sum += f_isprime(i);
			i++;
		}
		number(sum);
		write(1, "\n", 1);
	}
	else
		write(1, "0\n", 2);
	return (0);
}
