/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramier <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 15:31:23 by aramier           #+#    #+#             */
/*   Updated: 2023/06/13 15:31:24 by aramier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct s_list t_list;

struct s_list
{
	int	data;
	t_list	*next;
};