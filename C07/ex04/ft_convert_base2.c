/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asupreya <62011053@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 12:16:24 by asupreya          #+#    #+#             */
/*   Updated: 2022/10/23 12:16:30 by asupreya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	lenght_num(int nbr, char *base)
{
	int				digit;
	unsigned int	num;

	digit = 0;
	if (nbr < 0)
	{
		num = nbr * -1;
		digit++;
	}
	else
		num = nbr;
	while (num > 0)
	{
		num /= ft_strlen(base);
		digit++;
	}
	return (digit);
}

void	ft_putnbr_base2(int nbr, char *base, char *ptr)
{
	int		i;
	int		len;
	int		len1;
	long	num;
	
	i = 0;
	num = nbr;
	len = ft_strlen(base);
	len1 = lenght_num(nbr, base);
	if (num < 0)
	{
		ptr[0] = '-';
		num *= -1;
		i++;
	}
	len1--;
	while (num >= len)
	{
		ptr[len1] = base[num % len];
		num /= len;
		len1--;
	}
	if (num < len)
		ptr[i] = base[num];
}
