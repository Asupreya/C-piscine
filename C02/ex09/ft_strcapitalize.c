/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asupreya <62011053@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 15:23:55 by asupreya          #+#    #+#             */
/*   Updated: 2022/10/12 15:23:55 by asupreya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	ft_strlowcase(str);
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		while (str[j] != 32 && str[j] != '\0')
		{
			if (str[i] >= 97 && str[i] <= 122)
			{
				str[i] -= 32;
			}
			j++;
		}
		if (str[j] != '\0')
			j++;
		i = j;
	}
	return (str);
}

/*int	main(void)
{
	char    ch1[] = "moTher fUcKer";
	char    ch2[] = "dAmN shit kUy suS.";
	char    ch3[] = "yeD, 42kae";

	printf("%s\n",ft_strcapitalize(ch1));
	printf("%s\n",ft_strcapitalize(ch2));
	printf("%s\n",ft_strcapitalize(ch3));
	return (0);
}*/
