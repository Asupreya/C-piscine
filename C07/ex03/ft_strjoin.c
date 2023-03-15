/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asupreya <62011053@kmitl.ac.th>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 13:51:01 by asupreya          #+#    #+#             */
/*   Updated: 2022/10/20 13:51:01 by asupreya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
//#include<stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	full_length(int size, char **strs, char *sep)
{
	int	i;
	int	flen;

	i = 0;
	flen = 0;
	while (i < size)
	{
		flen = flen + ft_strlen(strs[i]) + ft_strlen(sep);
		i++;
	}
	flen = flen - ft_strlen(sep);
	return (flen);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		flen;
	int		i;
	char	*ptr;

	i = 0;
	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	flen = full_length(size, strs, sep);
	ptr = (char *)malloc(flen * sizeof(char) + 1);
	if (ptr == NULL)
		return (0);
	while (i < size)
	{
		ft_strcpy(ptr, strs[i]);
		ptr += ft_strlen(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(ptr, sep);
			ptr += ft_strlen(sep);
		}
		i++;
	}
	*ptr = '\0';
	ptr -= flen;
	return (ptr);
}

/*int	main(void)
{
	char	**strs;
	char	*sep;
	int		size;
	int		i;
	char	*result;

	size = 3;
	strs = (char **)malloc(size * sizeof(char *));
	strs[0] = (char *)malloc(sizeof(char) * 5 + 1);
	strs[1] = (char *)malloc(sizeof(char) * 7 + 1);
	strs[2] = (char *)malloc(sizeof(char) * 14 + 1);
	strs[0] = "Hello";
	strs[1] = "Friend";
	strs[2] = "You are awesome";
	sep = " ";
	result = ft_strjoin(size, strs, sep);
	printf("%s\n", result);
	free(result);
	return (0);
}*/
