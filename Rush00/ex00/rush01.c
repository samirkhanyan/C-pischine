/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samirkha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 09:53:55 by samirkha          #+#    #+#             */
/*   Updated: 2022/02/05 18:59:34 by samirkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	check(int i, int j, int x, int y)
{
	if (i == 1 && j == 1)
	{
		ft_putchar('/');
	}
	else if ((i == 1 && j == x) || (i == y && j == 1))
	{
		ft_putchar('\\');
	}
	else if (i == y && j == x)
	{
		ft_putchar('/');
	}
	else if (i == 1 || i == y || j == 1 || j == x)
	{
		ft_putchar('*');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int	i;	
	int	j;

	i = 1;
	j = 1;
	while (i <= y)
	{
		j = 1;
		while (j <= x)
		{
			check(i, j, x, y);
			j++;
		}	
		ft_putchar('\n');
		i++;
	}
}
