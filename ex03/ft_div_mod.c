/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djin <djin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 12:58:10 by djin              #+#    #+#             */
/*   Updated: 2023/04/08 11:05:20 by djin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
*div = a / b;
*mod = a % b;
}

/**int main(void)
{
	int	div, mod, n, n1;
	
	n = 42;
	n1 = 21;

	ft_div_mod(n, n1, &div, &mod);
	printf("%d = %d with remainder %d and modulus = %d", n, n1, div, mod);
}*/
