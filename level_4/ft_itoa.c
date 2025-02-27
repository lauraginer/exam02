#include <stdlib.h>
#include <stdio.h>

char	*ft_itoa(int nbr)
{
	long int n = (long)nbr;
	long int cpyn = n;
    int len = 0;
	
	if(n <= 0) //si el número es negativo se incrementa para contar la '-'
		len++;
	while(cpyn) //contar el número de dígitos
	{
		cpyn = cpyn / 10;
		len++;
	}
	char *ln = malloc(sizeof(char) * (len + 1));
	if(!ln)
		return(NULL);
	ln[len] = '\0';
	len --;
	if(n == 0) //caso especial si es 0
	{
		ln[0] = '0';
		return(ln);
	}
	if(n < 0) //actualizamos si es negativo
	{
		ln[0] = '-';
		n = -n;
	}
	while(n) //convertimos el número a cadena
	{
		ln[len] = n % 10 + '0';
		n = n / 10;
		len --;
	}
	return(ln);
}
/*int main()
{
	int str = 123;
	char *result = ft_itoa(str);
	printf("resultado: %s\n", result);
}*/
