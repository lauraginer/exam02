#include <unistd.h>

void change(char *str)
{
    int i;
	int flag;

    i = 0;
    while(str[i] == ' ' || str[i] >= 9 && str[i] <= 13) //saltar espacios iniciales
        i++;
	while(str[i])
	{
	 	if(str[i] == ' ' || str[i] >= 9 && str[i] <= 13)
			flag = 1;
		else if(!(str[i] == ' ' || str[i] >= 9 && str[i] <= 13)) //si son letras 
		{
			if(flag) //si encuentra espacio flag = 1, por lo que tiene contenido
				write(1, " ", 1);
			flag = 0;
			write(1, &str[i], 1);
		}
		i++;
	}
}
    
int main(int argc, char **argv)
{
    if(argc == 2)
        change(argv[1]);
    write(1, "\n", 1);
}