/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asupreya <62011053@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 12:50:10 by asupreya          #+#    #+#             */
/*   Updated: 2022/10/16 12:50:10 by asupreya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	p;

	p = nb;
	if (power > 1)
	{
		power--;
		return (nb * ft_recursive_power(nb, power));
	}
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (p);
}

/*int	main(void)
{
	printf("%d\n", ft_recursive_power(5, 3));
	printf("%d\n", ft_recursive_power(2, 10));
	printf("%i\n", ft_recursive_power(100, 1));
	printf("%d\n", ft_recursive_power(0, 0));
	return (0);
}*/
