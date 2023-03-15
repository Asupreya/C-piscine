/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asupreya <62011053@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 13:12:02 by asupreya          #+#    #+#             */
/*   Updated: 2022/10/15 13:12:02 by asupreya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_checkbase(char *base)
{
	int	i;
	int	j;
	int	s;

	i = 0;
	s = ft_strlen(base);
	if (base[0] == '\0' || s == 1)
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] <= 32 || base[i] == 43 || base[i] == 45)
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_printnum(int temp, int size, int len, char *base)
{
	while (size)
	{
		write(1, &base[temp / size], 1);
		temp %= size;
		size /= len;
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	temp;
	int	size;
	int	valid;
	int	len;

	size = 1;
	valid = ft_checkbase(base);
	len = ft_strlen(base);
	if (valid == 1)
	{
		if (nbr < 0)
		{
			write(1, "-", 1);
			nbr = nbr * (-1);
		}
		temp = nbr;
		temp /= len;
		while (temp)
		{
			temp /= len;
			size *= len;
		}
		temp = nbr;
		ft_printnum(temp, size, len, base);
	}
}

/*int	main(void)
{
	ft_putnbr_base(-14, "01");
	write(1, "\n", 1);
	ft_putnbr_base(525, "0123456789");
	write(1, "\n", 1);
	ft_putnbr_base(777, "poneyvif");
	write(1, "\n", 1);
	ft_putnbr_base(100, "0123456789ABCDEF");
	write(1, "\n", 1);
	return (0);
}*/
