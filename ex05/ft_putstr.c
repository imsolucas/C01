/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djin <djin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 16:32:14 by djin              #+#    #+#             */
/*   Updated: 2023/04/08 15:05:42 by djin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

//Create a function that displays a string of characters on the standard output.

void	ft_putstr(char *str)
{
	int	a;

	a = 0;
	while (str[i] != '\0')
	{
		write(1, &str[a], 1);
		a++;
	}
}

/*int main(void)
{
	char str[] = "Hello my name is Lucas";
	ft_putstr(str);
	return (0);
}*/
