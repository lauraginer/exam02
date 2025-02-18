#include <stdlib.h>
#include <stdio.h>

char	*ft_itoa(int nbr)
{
	(long)int n = nbr;
      	int len = 0;
	
	if(n <= 0)
		len++;
	long int cpyn = n;
	while(cpyn)
	{
		cpyn = cpyn / 10;
		len++;
	}
	char *ln = malloc(sizeof(char) * (len + 1));
	if(!ln)
		return(NULL);
	ln[len] = '\0';
	len --;
	if(n == 0)
	{
		ln[0] = '0';
		return(ln);
	}
	if(n < 0)
	{
		ln[0] = '-';
		n = -n;
	}
	while(n)
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
