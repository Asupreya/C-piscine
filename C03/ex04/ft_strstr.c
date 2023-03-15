/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asupreya <62011053@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 16:22:24 by asupreya          #+#    #+#             */
/*   Updated: 2022/10/13 16:22:24 by asupreya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	s;

	i = 0;
	s = 0;
	if (to_find[s] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + s] == to_find[s] && str[i + s] != '\0')
			s++;
		if (to_find[s] == '\0')
			return (str + i);
		i++;
	}	
	return (0);
}

/*int	main(void)
{
	char	ch1[] = "This is the way.";
	char	ch2[] = "Fuck";

	printf("%s\n ", ft_strstr(ch1, ch2));
	return (0);
}*/
