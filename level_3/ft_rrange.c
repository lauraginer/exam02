#include <stdio.h>
#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
    int *n;
    int i;
	
	i = 0;
    n = malloc(1000000); //funciona como alternativa al malloc
	while(start <= end)
	{
		n[i] = end;
		end--;
		i++; //posición exacta dentro del array
	}
	while(start >= end)
	{
		n[i] = end;
		end++;
		i++;
	}
    return(n);
}

/*int main()
{
	int start = 0;
	int end = -3;

	int *range;
    int size;
    int i;

    range = ft_rrange(start, end);
    if (!range)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    size = (start <= end) ? (end - start + 1) : (start - end + 1);
    for (i = 0; i < size; i++)
    {
        printf("%d ", range[i]);
    }
    printf("\n");

    free(range);
    return 0;
}*/