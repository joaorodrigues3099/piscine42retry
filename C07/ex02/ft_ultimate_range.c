/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 20:09:15 by joao-alm          #+#    #+#             */
/*   Updated: 2024/08/27 21:57:34 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int *buf;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	buf = (int *)malloc(sizeof(int) * (max - min));
	i = 0;
	while (min < max)
		buf[i++] = min++;
	*range = buf;
	return (i);
}
/*
#include <stdio.h>

int	main(int ac, char **av)
{
	if (ac != 3)
	{
		printf("Invalid arguments\n");
		printf("Format: ./[PROGRAM_NAME] [MIN] [MAX]\n");
		return (1);
	}
	int min = atoi(av[1]);
	int max = atoi(av[2]);
	if (min >= max)
	{
		printf("Min need to be smaller than Max.\n");
		return (1);
	}
	int *buf;
	printf("min: %d\n", min);
	printf("max: %d\n", max);
	printf("ft_ultimate_range: %d\n", ft_ultimate_range(&buf, min, max));
	int i = 0;
	int range = max - min;
	printf("range: {");
	while (i < range)
	{
		printf("%d", buf[i]);
		if (i != range - 1)
			printf(", ");
		i++;
	}
	printf("}\n");
	return (0);
}
*/