/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaz <aelbouaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 18:13:22 by aelbouaz          #+#    #+#             */
/*   Updated: 2025/05/26 14:10:46 by aelbouaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	// int	a;
	// int	b;
	// char str[] = "heyyy";

	// printf("\n");

	ft_printf("hello %");
	printf("\n");
	// printf("hello%");

	// ft_printf("%p\n", (void* )NULL);
	// printf("%p\n\n", (void* )NULL);

	// a =    printf("  PRINTF : hello %c %d %% %i %s %c %X %x %p \n", 97, 42, 42, "word", 'a', 42, 874, str);
	// b = ft_printf("FTPRINTF : hello %c %d %% %i %s %c %X %x %p\n", 97, 42, 42, "word", 'a', 42, 874, str);

	// printf("printed chars of printf:    %d\n", a);
	// printf("printed chars of ft_printf: %d\n\n", b);


	// ft_printf("ft_printed%d \n", 15, 12);
	// printf("   printed%d \n", 15, 12);

	// printf("\n");

	// printf("return for NULL: %  d\n", ft_printf(NULL));
	// printf("return for NULL: %  d\n", printf(NULL));

	// printf("\n");

	// ft_printf("undefined behavior: %d %s %x % \n", 42, "Hi", 140);
	// // printf("undefined behavior: %d %s %x % \n", 42, "Hi", 140);
	// printf("\n");
	// ft_printf("%d", ft_printf("undefined behavior: %d %s %x % \n", 42, "Hi", 140));
	// printf("%d", ft_printf("undefined behavior: %d %s %x % \n", 42, "Hi", 140));


	// printf("\n");

	//    printf("2 Edges printf    : Void string, and Void pt: %s %p\n", (char *)NULL, (void *)NULL);
	// ft_printf("2 Edges ft_printf : Void string, and Void pt: %s %p\n", (char *)NULL, (void *)NULL);

	// ft_printf(NULL);
	// ft_printf("%d\n\n", ft_printf(NULL));


	// ft_printf("%i %i", (int)15.5, (int)15658);
	// printf("\n");

	return (0);
}
