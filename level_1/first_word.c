//#include <unistd.h>

/*void print_fword(char*str)
{
	int i;
	i = 0;
	
	while(str[i] == ' ' || str[i] == '\t') //saltas espacios y tabulaciones iniciales
		i++;
	while(str[i] && (str[i] != ' ' && str[i] != '\t')) //imprimes la palabra hasta encontrar de nuevo un espacio o tabulacion
	{
		write(1, &str[i], 1);
		i++;
	}
	return ;
}*/
int	main(int argc, char **argv)
{
	if(argc == 2)
		print_fword(argv[1]);
	write(1, "\n", 1);
	return(0);
}