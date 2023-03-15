/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asupreya <62011053@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 12:04:40 by asupreya          #+#    #+#             */
/*   Updated: 2022/10/15 12:04:40 by asupreya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	j;
	int	num;
	int	neg;

	i = 0;
	j = 0;
	num = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
	{
		j = str[i] - '0';
		num = (num * 10) + j;
		i++;
	}
	if (neg % 2 != 0)
		num = num * (-1);
	return (num);
}

/*int	main(void)
{
	char	n[] = "   ---+--+01234ab567";

	printf("%d", ft_atoi(n));
	return (0);
}*/
