/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asupreya <62011053@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 18:26:35 by asupreya          #+#    #+#             */
/*   Updated: 2022/10/15 18:26:35 by asupreya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_strlen(char *str)
{
	int	lenght;

	lenght = 0;
	while (str[lenght] != '\0' )
		lenght++;
	return (lenght);
}

/*int	main(void)
{
	char	*name;

	name = "Prayuth";
	ft_strlen(name);
	printf("Lenght of String is %d", ft_strlen(name));
	return (0);
}*/
