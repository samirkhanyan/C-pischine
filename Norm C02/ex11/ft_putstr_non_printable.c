/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samirkha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:22:55 by samirkha          #+#    #+#             */
/*   Updated: 2022/02/15 14:24:19 by samirkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	int_to_hexdeximal(int deximal)
{
	char	hex_deximal_constants[16];
	char	hexdeximal[25];
	int		i;
	int		tmp;

	i = -1;
	while (++i <= 9)
	{
		hex_deximal_constants[i] = i + '0';
	}
	while (i <= 16)
	{
		hex_deximal_constants[i] = 'a' + i - 10;
		i++;
	}
	write(1, "\\", 1);
	write(1, "0", 1);
	while (deximal != 0)
	{
		tmp = deximal % 16;
		deximal = deximal / 16;
		write(1, &hex_deximal_constants[tmp], 1);
		i++;
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	i;
	int	tmp;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32)
		{
			tmp = str[i];
			int_to_hexdeximal(tmp);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}
