#include <unistd.h>

void last_word(char *str)
{
	int j = 0;
	int i = 0;

	while(str[i])
	{
		if (str[i] == ' ' && str[i + 1] >= 32 && str[i + 1] <= 126) //caracteres imprimibles
			j = i + 1;
		i++;
	}
	while(str[j] && (str[j] != ' ' || (str[j] < 9 && str[j] > 13))) //condición para eliminar los espacios finales
	{
		write(1, &str[j], 1);
		j++;
	}
}

int main (int argc, char **argv)
{
	if(argc == 2)
		last_word(argv[1]);
	write(1, "\n", 1);
	return(0);
}