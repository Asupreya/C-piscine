/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asupreya <62011053@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 15:36:10 by asupreya          #+#    #+#             */
/*   Updated: 2022/10/20 15:36:10 by asupreya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
void	ft_putnbr_base2(int nbr, char *base, char *ptr);
int		lenght_num(int nbr, char *base);

int	ft_checkredix(char redix, char *base)
{
	int	nb;

	nb = 0;
	while (base[nb] != '\0')
	{
		if (redix == base[nb])
			return (nb);
		nb++;
	}
	return (-1);
}

int	ft_checkbase(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
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
	return (i);
}

int	whitespace(char *str, int *ptr)
{
	int	i;
	int	neg;

	i = 0;
	neg = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg++;
		i++;
	}
	*ptr = i;
	return (neg);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	j;
	int	num;
	int	neg;
	int	len;

	i = 0;
	num = 0;
	len = ft_checkbase(base);
	if (len >= 2)
	{
		neg = whitespace(str, &i);
		j = ft_checkredix(str[i], base);
		while (j != -1)
		{
			num = (num * len) + j;
			i++;
			j = ft_checkredix(str[i], base);
		}
		if (neg % 2 != 0)
			num = num * (-1);
		return (num);
	}
	return (0);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*ptr;
	int		num;
	int		n;

	if (ft_checkbase(base_from) == 0 || ft_checkbase(base_to) == 0)
		return (0);
	num = ft_atoi_base(nbr, base_from);
	n = lenght_num(num, base_to);
	ptr = (char *)malloc((n + 1) * sizeof(char));
	if (ptr == NULL)
		return (0);
	ft_putnbr_base2(num, base_to, ptr);
	ptr[n] = '\0';
	return (ptr);
}

int	main(void)
{
	char	n[] = "   ---+--+01234567a#k";
	char	n2[] = "   +-+-+-+1011001G";
	char	n3[] = "   --+++FF!k";

	printf("%s\n", ft_convert_base(n, "0123456789", "01"));
	printf("%s\n", ft_convert_base(n2, "01", "0123456789ABCDEF"));
	printf("%s\n", ft_convert_base(n3, "0123456789ABCDEF", "0123456789"));
	return (0);
}
