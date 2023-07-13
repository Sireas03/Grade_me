/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramier <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 14:16:23 by aramier           #+#    #+#             */
/*   Updated: 2023/05/25 14:16:25 by aramier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int    lcm(unsigned int a, unsigned int b)
{
	unsigned int	i;

	if (a == 0 || b == 0)
		return (0);
	if (a > b)
		i = a;
	if (b > a)
		i = b;
	while (1)
	{
		if (i % a == 0 && i % b == 0)
			return (i);
		i++;
	}
}
