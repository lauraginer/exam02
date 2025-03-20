//#include <stdio.h>

int is_power_of_2(unsigned int n)
{
	if(n == 0) //si el n esta vacío
		return(0);

	while(n % 2 == 0) //mientras n sea divisible entre 2
		n = n / 2;
	if(n == 1)
		return(1);
	return(0);
}

/*int main ()
{
	int i;
	int result;

	i = 2;
	result = is_power_of_2(i);
	printf("valor de la funcion: %d\n", result);
	return(0);
}*/