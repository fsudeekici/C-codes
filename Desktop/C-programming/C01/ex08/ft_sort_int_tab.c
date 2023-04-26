/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fekici <fekici@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 18:32:13 by fekici            #+#    #+#             */
/*   Updated: 2023/03/27 18:32:13 by fekici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	while (size >=  0)
	{	i = 0;
		while (i < size - 1)
		{
			if(tab[i] >tab[i + 1])
			{
				swap = tab[i];
				tab[i] = tab [i+1];
				tab[i+1] = swap;
			}
			i++;
		}
		size--;
	}
}


