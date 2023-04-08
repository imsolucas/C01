/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djin <djin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 09:27:28 by djin              #+#    #+#             */
/*   Updated: 2023/04/08 11:22:10 by djin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

//Create a function that counts and 
//returns the number of characters in a string.

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (str[c] != 0)
	{
		c++;
	}
	return (c);
}

/*int	main()
{
	char str[] = "I want it that way!";
	int result = ft_strlen(str);
	printf("The length of the string is %d.\n", result);
	return 0;
}*/
