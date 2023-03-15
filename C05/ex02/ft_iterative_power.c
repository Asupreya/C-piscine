/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asupreya <62011053@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 12:22:27 by asupreya          #+#    #+#             */
/*   Updated: 2022/10/16 12:22:27 by asupreya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	p;

	p = nb;
	if (power > 0)
	{
		while (power > 1)
		{
			p *= nb;
			power--;
		}
		return (p);
	}
	if (power == 0)
		return (1);
	return (0);
}

/*int	main(void)
{
	printf("%d\n", ft_iterative_power(5, 3));
	printf("%d\n", ft_iterative_power(2, 10));
	printf("%d\n", ft_iterative_power(7, -2));
	printf("%d\n", ft_iterative_power(0, 0));
	return (0);
}*/
