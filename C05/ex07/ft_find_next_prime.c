/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asupreya <62011053@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 16:03:19 by asupreya          #+#    #+#             */
/*   Updated: 2022/10/16 16:03:19 by asupreya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i <= (nb / 2))
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 0;
	while (nb >= 0)
	{
		i = ft_is_prime(nb);
		if (i == 1)
			return (nb);
		nb++;
	}
	return (2);
}

/*int	main(void)
{
	printf("%d\n", ft_find_next_prime(9));
	printf("%d\n", ft_find_next_prime(29));
	printf("%d\n", ft_find_next_prime(0));
	printf("%d\n", ft_find_next_prime(-5));
	return (0);
}*/
