/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asupreya <62011053@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:34:15 by asupreya          #+#    #+#             */
/*   Updated: 2022/10/12 11:34:15 by asupreya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
				i++;
		else
			return (0);
	}		
	return (1);
}

/*int	main(void)
{
	char	ch1[] = "AbcDef";
	char	ch2[] = "";
	char	ch3[] = "กขค;*>";

	printf("%d\n",ft_str_is_alpha(ch1));
	printf("%d\n",ft_str_is_alpha(""));
	printf("%d\n",ft_str_is_alpha(ch3));
	return (0);
}*/
