/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asupreya <62011053@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 14:41:49 by asupreya          #+#    #+#             */
/*   Updated: 2022/10/16 14:41:49 by asupreya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_sqrt(int nb)
{
	int	i;
	int	r;

	i = 0;
	if (nb == 1)
		return (1);
	if (nb <= 0)
		return (0);
	if (nb >= 2)
	{
		while (i * i <= nb)
		{
			if (i * i == nb)
				return (i);
			i++;
		}
	}
	return (0);
}

/*int	main(void)
{
	printf("%d\n", ft_sqrt(9));
	printf("%d\n", ft_sqrt(-3));
	printf("%d\n", ft_sqrt(100));
	printf("%d\n", ft_sqrt(86));
	return (0);
}*/
