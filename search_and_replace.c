#include <unistd.h>

int main (int argc, char **argv)
{
	int i;

	i = 0;
	if(argc == 4)
	{
		write(1, "hola", 4);
	}
	else if (!argv[1][i]) //corregir, si el segundo argv no existe en la cadena haz esto
	{
		write(1, &argv[1][i], 1);
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
	return(0);
}

void search(char letter)
{

}
void replace(char letter)
{
	
}