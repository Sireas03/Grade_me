/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramier <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 09:16:48 by aramier           #+#    #+#             */
/*   Updated: 2023/06/02 09:16:49 by aramier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int     *ft_range(int start, int end)
{
	int	i;
	int	len;
	int	*n;

	i = 0;
	len = abs((end - start)) + 1;
	n = (int *)malloc(sizeof(int) * len);
	
	while (i < len)
	{
		if (start < end)
		{
			n[i] = start;
			start++;
			i++;
		}
		else
		{
			n[i] = start;
			start--;
			i++;
		}
	}
	return (n);
}
