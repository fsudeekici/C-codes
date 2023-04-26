/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fekici <fekici@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 18:10:00 by fekici            #+#    #+#             */
/*   Updated: 2023/03/27 18:10:00 by fekici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int	*tab, int size)
{
	int	i;
	int	swap;

	while (i < (size / 2))
	{
		swap = tab[i];
		tab[i] = tab [size - 1 - i];
		tab[size - 1 - i] = swap;
		i++;
	}
}
