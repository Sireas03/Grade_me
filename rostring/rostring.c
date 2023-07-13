/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramier <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 09:33:17 by aramier           #+#    #+#             */
/*   Updated: 2023/06/19 09:33:17 by aramier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ros(char str[])
{
	int	i;
	int	start;
	int	end;

	i = 0;
	while (str[i])
	{
		
		while ((str[i] == ' ' || str[i] == '	') && str[i] != '\0')
			i++;
		start = i;
		while (str[i] != ' ' && str[i] != '	' && str[i] != '\0')
			i++;
		end = i - 1;
		while ((str[i] == ' ' || str[i] == '	') 
			&& str[i] != '\0')
			i++;
		while (str[i])
		{
			write(1, &str[i], 1);
			i++;
			while ((str[i] == ' ' || str[i] == '	') && 
				(str[i + 1] == ' ' || str[i + 1] == '	') && str[i] != '\0')
				i++;
			if (str[i] == '\0' && str[i - 1] != ' ')
				write(1, " ", 1);
			
		}
		while (start <= end)
		{
			write(1, &str[start], 1);
			start++;
		}
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	if (argc > 1)
		ros(argv[1]);
	write(1, "\n", 1);
	return (0);
}
