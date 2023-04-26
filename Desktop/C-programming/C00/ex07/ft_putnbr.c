/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fekici <fekici@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 16:46:43 by fekici            #+#    #+#             */
/*   Updated: 2023/03/26 16:46:43 by fekici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putchar(char c){
	write (1, &c, 1);
}
void	ft_putnbr(int nb)
{
	if(nb == -2147483648)
	{
		ft_putchar ('-');
		ft_putchar ('2');
		ft_putnbr (147483648);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
		ft_putnbr (nb);
	}
	else if (nb > 9)
	{
		ft_putnbr (nb / 10);
		ft_putnbr ((nb % 10) + '0');
	}
	else 
		ft_putchar (nb + '0');
}
int main(void){
	ft_putnbr(45463);
	ft_putchar('\n');
	return 0;

 }
