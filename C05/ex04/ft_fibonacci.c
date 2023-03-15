/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asupreya <62011053@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 13:36:51 by asupreya          #+#    #+#             */
/*   Updated: 2022/10/16 13:36:51 by asupreya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_fibonacci(int index)
{
	if (index > 1)
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	if (index < 0)
		return (-1);
	return (index);
}

/*int	main(void)
{
	printf("%d\n", ft_fibonacci(9));
	printf("%d\n", ft_fibonacci(-3));
	printf("%d\n", ft_fibonacci(14));
	printf("%d\n", ft_fibonacci(0));
	return (0);
}*/
