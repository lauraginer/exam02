#include <stdio.h>

int		max(int* tab, unsigned int len)
{
	int result;
	int i = 0;
	
	if (len == 0)
		return (0);
	result = tab[i];
	while(i < len)
	{
		if(result < tab[i])
			result = tab[i];
		i++;
	}
	return (result);
}
int main()
{

	int tab[] = {1, 5, 3, 4, 7, 30};
	unsigned int len = sizeof(tab) / sizeof(tab[0]);
	int result;

	result = max(tab, len);
	printf("valor de la funcion: %d\n", result);
	return(0);
}