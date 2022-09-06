#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "my.h"

void	tester(char send_string[])
{
	char *str_my_dup;
	char *str_dup;

	str_my_dup = ft_strdup(send_string);
	str_dup = strdup(send_string);

	printf("\n");
	if (ft_strcmp(str_my_dup, str_dup) == 0)
		printf(PRINTGRN("SUCESSO!!"));
	else
		printf(PRINTRED("Algo deu Errado!!"));
	printf("\n\nMy String Dup Resulta em: "PRINTYEL("'%s'\n"), str_my_dup);
	printf("Function strdup Resulta em: "PRINTYEL("'%s'\n"), str_dup );
	printf("Valor de Entrada: "PRINTYEL("'%s'\n\n"), send_string);
	printf("======================================\n");
	free(str_dup);
	free(str_my_dup);
}

int	main()
{
	tester("");
	tester("hello 42");
	tester("AAAA");
	tester("TaVsVv0GMRuI7");
	tester("tFSxEQof78ogWPadIn6fO5ssIr9FfeleLtnlGP5lnxC7w5A");
	tester("qp12lGxRnW1XWqk4u");
	tester("nCYjTQRO1Nn");
	tester("vg7q0SckKM8j");
	tester("zyNr0");
	tester("tgJZje2xrNmclcYld8K");
	tester("MkSDML6kL7aZHU3zm076RST0z6VRHLcgsCrRj");
}