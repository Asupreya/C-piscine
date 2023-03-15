/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asupreya <62011053@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 17:39:34 by asupreya          #+#    #+#             */
/*   Updated: 2022/10/12 17:39:34 by asupreya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	*ft_print_memory(char *str)
{
	int	i;
	int	v;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 127)
		{
			ft_putchar(str[i]);
		}	
		else
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[str[i] / 16]);
			ft_putchar("0123456789abcdef"[str[i] % 16]);
		}	
		i++;
	}
}

int	main(void)
{
	char	ch1[] = "Fuck\nYou World";
	char	ch2[] = "I\fam\tSorry";

	ft_print_memory(ch1);
	ft_print_memory(ch2);
	return (0);
}
