//#include <stdio.h>

int	ft_strlen(char *str)
{
	int i;
	i = 0;
	while(str[i])
		i++;
	return(i);
}

/*int main()
{
	char *str;

	str = "Holiwis";
	ft_strlen(str);
	printf("longitud: %d\n", ft_strlen(str));
	return(0);
}*/