#include <stdio.h>
#include <stdlib.h>

int     *ft_range(int start, int end)
{
    int *n;
    int i;
	
	i = 0;
    n = malloc(1000000);
	while(start <= end)
	{
		n[i] = start;
		start++;
		i++;
	}
	while(start >= end)
	{
		n[i] = start;
		start--;
		i++;
	}
    return(n);
}