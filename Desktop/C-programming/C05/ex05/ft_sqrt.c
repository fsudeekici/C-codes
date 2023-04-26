/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fekici <fekici@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 17:07:20 by fekici            #+#    #+#             */
/*   Updated: 2023/04/10 17:07:20 by fekici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	long	i;
	long	sayi;

	sayi = nb;
	if (sayi <= 0)
		return (0);
	if (sayi == 1)
		return (1);
	i = 2;
	if (sayi >= 2)
	{
		while (i * i <= sayi)
		{
			if (i * i == sayi)
				return (i);
			i++;
		}
	}
	return (0);
}
