/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fekici <fekici@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 14:34:18 by fekici            #+#    #+#             */
/*   Updated: 2023/03/29 14:34:18 by fekici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{	
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] > 'z' || str[i] < 'a') && (str[i] > 'Z' || str[i] < 'A'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int main(void)
{
	int a;
	char str[] = "dgjhn ";
	a = ft_str_is_alpha(str);

	printf("%d\n",a);
}
*/
