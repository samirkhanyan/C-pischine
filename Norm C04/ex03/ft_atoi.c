/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samirkha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 13:28:33 by samirkha          #+#    #+#             */
/*   Updated: 2022/02/21 13:24:06 by samirkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	index;
	int	s;
	int	tiv;

	index = 0;
	s = 1;
	tiv = 0;
	while ((str[index] >= '\t' && str[index] <= '\r') || str[index] == ' ')
		index++;
	while (str[index] == '+' || str[index] == '-')
	{
		if (str[index] == '-')
		s = s * -1;
		index++;
	}
	while (str[index] >= '0' && str[index] <= '9')
	{
		tiv = (str[index] - '0') + (tiv * 10);
		index++;
	}
	return (tiv * s);
}
