/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samirkha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 16:09:41 by samirkha          #+#    #+#             */
/*   Updated: 2022/02/16 10:17:45 by samirkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	mnacac(int nb)
{
	char	arr[11];
	char	i;
	int		tmp;

	tmp = 0;
	while (nb != 0)
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			nb *= -1;
		}
		i = nb % 10 + '0';
		nb /= 10;
		arr[tmp] = i;
		tmp ++;
	}
	while (tmp > 0)
	{
		i = arr[tmp - 1];
		write(1, &i, 1);
		tmp--;
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb == 0)
	{
		write(1, "0", 1);
		return ;
	}
	mnacac(nb);
}
