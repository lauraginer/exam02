//#include <stdio.h>

int    ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while(s1[i] && s2[i])
	{
		if(s1[i] != s2[i])
			return(s1[i] - s2[i]);
		i++;
	}
	return(s1[i] - s2[i]);
}

/*int main()
{
	char *s1;
	char *s2;
	int	result;

	s1 = "holi";
	s2 = "hola";
	result = ft_strcmp(s1, s2);
	printf("Resultado de la comparación: %d\n", result);
	return(0);
}*/