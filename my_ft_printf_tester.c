/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_ft_printf_tester.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llethuil <llethuil@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 14:45:25 by llethuil          #+#    #+#             */
/*   Updated: 2022/01/02 00:25:00 by llethuil         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include "../../LEVEL_2/exam_02_training/ft_printf/ft_printf.h"

int main()
{
	int		printf_return = 0;
	int		ft_printf_return = 0;

	printf("\n=====	NATIVE FUNCTION VS MY FUNCTION	=====\n");

							/* TEST CHAR */
	printf("\n---		\e[96mTEST CHAR\e[39m		---\n");

	// TEST #1
	printf("\n\e[95mTEST 1\e[39m : single char argument\n");
	printf("\nNATIVE PRINTF : \n");
	printf_return = printf("%c", 'c');
	printf("\nMY PRINTF : \n");
	ft_printf_return = ft_printf("%c", 'c');
	if ( printf_return == ft_printf_return)
		printf("\n\e[92m[OK]\e[39m\n");
	else
		printf("\n\e[31m[KO]\e[39m\n");

	// TEST #2
	printf("\n\e[95mTEST 2\e[39m : single char argument + new line\n");
	printf("\nNATIVE PRINTF : \n");
	printf_return = printf("%c\n", 'c');
	printf("MY PRINTF : \n");
	ft_printf_return = ft_printf("%c\n", 'c');
	if ( printf_return == ft_printf_return)
		printf("\e[92m[OK]\e[39m\n");
	else
		printf("\e[31m[KO]\e[39m\n");

							/* TEST STRING */
	printf("\n---		\e[96mTEST STRING\e[39m		---\n");

	// TEST #1
	printf("\n\e[95mTEST 1\e[39m : single empty string argument\n");
	printf("\nNATIVE PRINTF : \n");
	printf_return = printf("%s", "");
	printf("\nMY PRINTF : \n");
	ft_printf_return = ft_printf("%s", "");
	if ( printf_return == ft_printf_return)
		printf("\e[92m[OK]\e[39m\n");
	else
		printf("\e[31m[KO]\e[39m\n");

	// TEST #2
	printf("\n\e[95mTEST 2\e[39m : single string argument + new line\n");
	printf("\nNATIVE PRINTF : \n");
	printf_return = printf("%s\n", "Hello World");
	printf("MY PRINTF : \n");
	ft_printf_return = ft_printf("%s\n", "Hello World");
	if ( printf_return == ft_printf_return)
		printf("\e[92m[OK]\e[39m\n");
	else
		printf("\e[31m[KO]\e[39m\n");

							/* TEST INT */
	printf("\n---		\e[96mTEST INT\e[39m		---\n");

	// TEST #1
	printf("\n\e[95mTEST 1\e[39m : single pos int argument (i)\n");
	printf("\nNATIVE PRINTF : \n");
	printf_return = printf("%d", 42);
	printf("\nMY PRINTF : \n");
	ft_printf_return = ft_printf("%d", 42);
	if ( printf_return == ft_printf_return)
		printf("\n\e[92m[OK]\e[39m\n");
	else
		printf("\n\e[31m[KO]\e[39m\n");

	// TEST #2
	printf("\n\e[95mTEST 2\e[39m : single neg int argument (i)\n");
	printf("\nNATIVE PRINTF : \n");
	printf_return = printf("%d", -42);
	printf("\nMY PRINTF : \n");
	ft_printf_return = ft_printf("%d", -42);
	if ( printf_return == ft_printf_return)
		printf("\n\e[92m[OK]\e[39m\n");
	else
		printf("\n\e[31m[KO]\e[39m\n");

	// TEST #3
	printf("\n\e[95mTEST 3\e[39m : int argument 0 (i)\n");
	printf("\nNATIVE PRINTF : \n");
	printf_return = printf("%d", 0);
	printf("\nMY PRINTF : \n");
	ft_printf_return = ft_printf("%d", 0);
	if ( printf_return == ft_printf_return)
		printf("\n\e[92m[OK]\e[39m\n");
	else
		printf("\n\e[31m[KO]\e[39m\n");

	// TEST #4
	printf("\n\e[95mTEST 4\e[39m : int min (i)\n");
	printf("\nNATIVE PRINTF : \n");
	printf_return = printf("%d", INT_MIN);
	printf("\nMY PRINTF : \n");
	ft_printf_return = ft_printf("%d", INT_MIN);
	printf("\n");
	if ( printf_return == ft_printf_return)
		printf("\n\e[92m[OK]\e[39m\n");
	else
		printf("\n\e[31m[KO]\e[39m\n");

	// TEST #5
	printf("\n\e[95mTEST 5\e[39m : int max (i)\n");
	printf("\nNATIVE PRINTF : \n");
	printf_return = printf("%d", INT_MAX);
	printf("\nMY PRINTF : \n");
	ft_printf_return = ft_printf("%d", INT_MAX);
	if ( printf_return == ft_printf_return)
		printf("\n\e[92m[OK]\e[39m\n");
	else
		printf("\n\e[31m[KO]\e[39m\n");
	
	// TEST #6
	printf("\n\e[95mTEST 2\e[39m : multi pos int argument (i)\n");
	printf("\nNATIVE PRINTF : \n");
	printf_return = printf("%d %d %d", 42, 9, 1993);
	printf("\nMY PRINTF : \n");
	ft_printf_return = ft_printf("%d %d %d", 42, 9, 1993);
	if ( printf_return == ft_printf_return)
		printf("\n\e[92m[OK]\e[39m\n");
	else
		printf("\n\e[31m[KO]\e[39m\n");
	
	// TEST #6
	printf("\n\e[95mTEST 2\e[39m : multi neg int argument (i)\n");
	printf("\nNATIVE PRINTF : \n");
	printf_return = printf("%d %d %d", -42, -9, -1993);
	printf("\nMY PRINTF : \n");
	ft_printf_return = ft_printf("%d %d %d", -42, -9, -1993);
	if ( printf_return == ft_printf_return)
		printf("\n\e[92m[OK]\e[39m\n");
	else
		printf("\n\e[31m[KO]\e[39m\n");

								/* TEST HEXA */
	printf("\n---		\e[96mTEST HEXA\e[39m		---\n");

	// TEST #1
	printf("\n\e[95mTEST 1\e[39m : single pos int argument to print as hexa (low case)\n");
	printf("\nNATIVE PRINTF : \n");
	printf_return = printf("%x", 42);
	printf("\nMY PRINTF : \n");
	ft_printf_return = ft_printf("%x", 42);
	if ( printf_return == ft_printf_return)
		printf("\n\e[92m[OK]\e[39m\n");
	else
		printf("\n\e[31m[KO]\e[39m\n");
	// TEST #2
	printf("\n\e[95mTEST 2\e[39m : single neg int argument to print as hexa (low case)\n");
	printf("\nNATIVE PRINTF : \n");
	printf_return = printf("%x", -42);
	printf("\nMY PRINTF : \n");
	ft_printf_return = ft_printf("%x", -42);
	if ( printf_return == ft_printf_return)
		printf("\n\e[92m[OK]\e[39m\n");
	else
		printf("\n\e[31m[KO]\e[39m\n");
	// TEST #3
	printf("\n\e[95mTEST 3\e[39m : single pos int argument to print as hexa (up case)\n");
	printf("\nNATIVE PRINTF : \n");
	printf_return = printf("%X", 42);
	printf("\nMY PRINTF : \n");
	ft_printf_return = ft_printf("%X", 42);
	if ( printf_return == ft_printf_return)
		printf("\n\e[92m[OK]\e[39m\n");
	else
		printf("\n\e[31m[KO]\e[39m\n");
	// TEST #4
	printf("\n\e[95mTEST 4\e[39m : single neg int argument to print as hexa (up case)\n");
	printf("\nNATIVE PRINTF : \n");
	printf_return = printf("%X", -42);
	printf("\nMY PRINTF : \n");
	ft_printf_return = ft_printf("%X", -42);
	if ( printf_return == ft_printf_return)
		printf("\n\e[92m[OK]\e[39m\n");
	else
		printf("\n\e[31m[KO]\e[39m\n");

							/* TEST ADDRESSES */
	printf("\n---		\e[96mTEST ADDRESS\e[39m		---\n");

	// TEST #1
	int	i = 42;
	int	*ptr_i = &i;
	printf("\n\e[95mTEST 1\e[39m : single address\n");
	printf("\nNATIVE PRINTF : \n");
	printf_return = printf("%p", ptr_i);
	printf("\nMY PRINTF : \n");
	ft_printf_return = ft_printf("%p", ptr_i);
	if (printf_return == ft_printf_return)
		printf("\n\e[92m[OK]\e[39m\n");
	else
		printf("\n\e[31m[KO]\e[39m\n");

							/* TEST ADDRESSES */
	printf("\n---		\e[96mTEST %%\e[39m		---\n");
	// TEST #1
	printf("\n\e[95mTEST 1\e[39m : %% as argument\n");
	printf("\nNATIVE PRINTF : \n");
	printf_return = printf("%%");
	printf("\nMY PRINTF : \n");
	ft_printf_return = ft_printf("%%");
	if (printf_return == ft_printf_return)
		printf("\n\e[92m[OK]\e[39m\n");
	else
		printf("\n\e[31m[KO]\e[39m\n");

							/* TEST % */
	printf("\n---		\e[96mTEST %%\e[39m		---\n");
	// TEST #1
	printf("\n\e[95mTEST 1\e[39m : %% as argument\n");
	printf("\nNATIVE PRINTF : \n");
	printf_return = printf("%%");
	printf("\nMY PRINTF : \n");
	ft_printf_return = ft_printf("%%");
	if (printf_return == ft_printf_return)
		printf("\n\e[92m[OK]\e[39m\n");
	else
		printf("\n\e[31m[KO]\e[39m\n");

							/* TEST % */
	printf("\n---		\e[96mTEST MIXED\e[39m		---\n");
	// TEST #1
	printf("\n\e[95mTEST 1\e[39m : mixed arguments\n");
	printf("\nNATIVE PRINTF : \n");
	printf_return = printf("%c%c, %s%s%s, %i, %d, %p, %x, %X, %%\n", 'C', 'C', "la", "STREET", "!!!", 42, -42, ptr_i, 42, -42);
	printf("\nMY PRINTF : \n");
	ft_printf_return = ft_printf("%c%c, %s%s%s, %i, %d, %p, %x, %X, %%\n", 'C', 'C', "la", "STREET", "!!!", 42, -42, ptr_i, 42, -42);
	if (printf_return == ft_printf_return)
		printf("\e[92m[OK]\e[39m\n");
	else
		printf("\e[31m[KO]\e[39m\n");
    return (0);
}