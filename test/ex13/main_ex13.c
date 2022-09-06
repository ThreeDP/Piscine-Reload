#include <stdio.h>

#define PRINTRED(x)  "\x1B[31m"x"\x1B[37m"
#define PRINTGRN(x)  "\x1B[32m"x"\x1B[37m"
#define PRINTYEL(x)  "\x1B[33m"x"\x1B[37m"

int	ft_recursive_factorial(int nb);

void	imprimir(int nb, int esperado, int *line)
{
	int number;

	printf("\n>> Fatorial de: %d\n", nb);
	printf(" (deveria ter impresso: %d)\n", esperado);
	number = ft_recursive_factorial(nb);
	printf("Valor Recebido: %d\n\n", number);
	if (number == esperado)
		printf(PGRN("SUCESSO!!"));
	else 
		printf("%sxxxERROxxx%s", KRED, KWHT);
	printf("\n*=========================* Teste: %d", *line);
	*line += 1;
}

void	testar()
{
	int line;

	line = 1;
	printf("\n\n------- teste -------\n");
	imprimir(5, 120, &line);
	imprimir(0, 1, &line);
	imprimir(-1, 0, &line);
	imprimir(21, 0, &line);
	imprimir(-32, 0, &line);
	imprimir(1, 1, &line);
	imprimir(2, 2, &line);
	imprimir(12, 479001600, &line);
	imprimir(8, 40320, &line);
	imprimir(9, 362880, &line);
	imprimir(4, 24, &line);
	imprimir(6, 720, &line);
	imprimir(16, 0, &line);
	printf("\n");

}

int main()
{
	printf("--- iniciando testes ---\n\n");
	testar();
}
