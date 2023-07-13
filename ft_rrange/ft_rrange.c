/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramier <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 09:55:38 by aramier           #+#    #+#             */
/*   Updated: 2023/06/13 09:55:41 by aramier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     *ft_rrange(int start, int end)
{
	int	n;
	int	i;
	int	*range;

	n = (end - start) + 1;
	i = 0;
	range = (int *)malloc(sizeof(int) * n);
	if (start > end)
		return (ft_rrange(end, start));
	if (range)
	{
		while (i < n)
		{
			range[i] = end;
			end--;
			i++;
		}
	}
	return (range);
}
