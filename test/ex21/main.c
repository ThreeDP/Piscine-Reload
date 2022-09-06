#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "my.h"

int	arraycmp(int *ptr, int min, int max)
{
	while(min < max)
	{
		if (*ptr != min)
			return (0);
		ptr++;
		min++;
	}
	return (1);
}

void	tester(int min, int max)
{
	int *ptr_range;
	int i;

	ptr_range = ft_range(min, max);

	printf("\n");
	if (arraycmp(ptr_range, min, max))
		printf(PRINTGRN("SUCESSO!!"));
	else
		printf(PRINTRED("Algo deu Errado!!"));
	printf("\n\nO Resultado da Array Obtido:\n");
	i = 0;
	if (ptr_range)
	{
		while(ptr_range[i] < max)
		{
			printf(PRINTYEL("[%d]"), ptr_range[i]);
			i++;
		}
	} 
	else 
		printf(PRINTYEL("[%d]"), *ptr_range);

	printf("\nResultado Esperado:\n");
	i = min;
	if (min >= max)
		printf(PRINTYEL("[%d]"), 0x0);
	else {
		while(i < max)
		{
			printf(PRINTYEL("[%d]"), i);
			i++;
		}
	}
	printf("\nO Intervalo Deveria ser de "PRINTYEL("%d")" ~ "PRINTYEL("%d"), min, max -1);
	printf("\n======================================\n");
	free(ptr_range);
}

int	main()
{
	tester(12, 20);
	tester(19, 20);
	tester(-3, 50);
	tester(20, 20);
}