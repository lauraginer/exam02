#include <stdio.h>
void sort_int_tab(int *tab, unsigned int size)
{
	unsigned int i = 0;
	int aux;

	while(i < (size - 1))
	{
		if(tab[i] > (tab[i + 1]))
		{
			aux = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = aux;
			i = 0;
		}
		else
			i++;
	}
}

int main(void)
{
	unsigned int i = 0;
	unsigned int size = 5;
	int tab[] = {8, 3, 9, 9, 7};
	sort_int_tab (tab, size);
	while (i < size)
	{
		printf ("%d", tab[i]);
		i++;
	}
	return (0);
}