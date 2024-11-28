//#include <stdio.h>

char    *ft_strcpy(char *s1, char *s2)
{
	int i;

	i = 0;
	while(s2[i])
	{
		s1[i] = s2[i]; //importante el indice separado
		i++;
	}
	s1[i] = '\0';
	return(s1);
}

/*int main()
{
	char *str;
	char dest[20];

	str = "hola que tal";
	ft_strcpy(dest, str);
	printf("resultado de dest:%s\n", dest);
	printf("resultado de str:%s\n", str);
	return(0);
}*/