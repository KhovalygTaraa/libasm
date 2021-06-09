/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swquinc <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 15:24:33 by swquinc           #+#    #+#             */
/*   Updated: 2021/01/17 17:57:15 by swquinc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include "libasm.h"

int		main()
{
	char	*khov;
	char	*taraa;
	size_t		i;
	int			a;

//	char	*taraa;

//	taraa = "onjour";	

/**************_ft_strlen_***************/
	printf("*______ft_strlen______*\n");

	khov = "bonjour"; // 1

	i = ft_strlen(khov);
	printf("ft_strlen = %zu\n", i);
	i = strlen(khov);
	printf("strlen = %zu\n", i);

	khov = "3h4heth4eherh3434ieugq03hg8whG8[y02	0t[0	23hgj31i4gfj3hgf3"; // 2

	i = ft_strlen(khov);
	printf("\nft_strlen = %zu\n", i);
	i = strlen(khov);
	printf("strlen = %zu\n", i);

	khov = ""; // 3

	i = ft_strlen(khov);
	printf("\nft_strlen = %zu\n", i);
	i = strlen(khov);
	printf("strlen = %zu\n", i);

	khov = "3"; //4
	i = ft_strlen(khov);
	printf("\nft_strlen = %zu\n", i);
	i = strlen(khov);
	printf("strlen = %zu\n", i);

/**************_ft_strcmp_***************/

	printf("*______ft_strlen______*\n");

	khov = "world"; //1
	taraa = "orld";

	a = ft_strcmp(khov, taraa);
	printf("ft_strcmp = %d\n", a);
	a = strcmp(khov, taraa);
	printf("strcmp = %d\n", a);

	khov = ""; //2
	taraa = "";

	a = ft_strcmp(khov, taraa);
	printf("\nft_strcmp = %d\n", a);
	a = strcmp(khov, taraa);
	printf("strcmp = %d\n", a);

	khov = "world"; //3
	taraa = "world";

	a = ft_strcmp(khov, taraa);
	printf("\nft_strcmp = %d\n", a);
	a = strcmp(khov, taraa);
	printf("strcmp = %d\n", a);

	khov = "world"; //4
	taraa = "worlddfsdfsd";

	a = ft_strcmp(khov, taraa);
	printf("\nft_strcmp = %d\n", a);
	a = strcmp(khov, taraa);
	printf("strmp = %d\n", a);

	khov = "worldsdfsdf";
	taraa = "world";

	a = ft_strcmp(khov, taraa);
	printf("\nft_strcmp = %d\n", a);
	a = strcmp(khov, taraa);
	printf("strcmp = %d\n", a);
/**************_ft_strcpy_***************/

	printf("*______ft_strcpy______*\n");
	char tara[150];
	char *lol;
	lol = "Helloooooooooooooooooo";
	printf("ft_strcpy(return) = %s\n", ft_strcpy(tara, lol));
	printf("ft_strcpy(dest)   = %s\n", tara);
	printf("strcpy(return) = %s\n", strcpy(tara, lol));
	printf("strcpy(dest)   = %s\n", tara);

/**************_ft_write_***************/

	printf("*______ft_write______*\n");

	lol = "Hello World!";
	printf(" - %zu char\n", ft_write(1, lol, ft_strlen(lol)));
	printf(" - %zu char\n", write(1, lol, ft_strlen(lol)));

	printf(" - %zu char\n", ft_write(4, lol, ft_strlen(lol)));
	perror("wtf");
	printf(" - %zu char\n", write(4, lol, ft_strlen(lol)));
	perror("wtf");
/**************_ft_read_***************/

	char boom[150];

	printf("*______ft_read______*\n");
	printf("%zu\n%s", ft_read(1, &boom, 10), boom);
	printf("%zu\n%s", read(1, &boom, 10), boom);

	printf("%zu\n%s", ft_read(4, &boom, 10), boom);
	perror("wtf");
	printf("%zu\n%s", read(4, &boom, 10), boom);
	perror("wtf");

/**************_ft_strdup_***************/

	printf("*______ft_strdup______*\n");

	lol = "NASM - assembler";
	taraa = ft_strdup(lol);
	perror("wtf");
	printf("%s\n", taraa);
	free(taraa);
	return (0);
}
