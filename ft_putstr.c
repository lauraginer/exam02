//#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		write(1, &str[i], 1); //accedes a la direccion de memoria de cada caracter
		i++;
	}
	write(1, "\n", 1);
	return ;

}

/*int main()
{
	char *str;

	str = "Buenas";
	ft_putstr(str);
	return(0);
}*/