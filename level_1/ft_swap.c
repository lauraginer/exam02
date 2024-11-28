//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*int main ()
{
	int y;
	int e;

	y = 2;
	e = 5;
	ft_swap(&y, &e);
	printf("Resultado de y: %d\n", y);
	printf("Resultado de e: %d\n", e);
	return(0);
}*/