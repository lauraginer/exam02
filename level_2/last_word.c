#include <unistd.h>

char last_word(char *str)
{
	int i;

	i = 0;
	while(str[i])
		i++;
	while(str[i] > 0)
	{
		if(str[i] == " " || str[i] == "\t")
			return(str);
		i++;
	}
	return(*str);
	write(1, &str, 1);
}

int main (int argc, char **argv)
{ 
	int i;

	i = 0;
	if(argc == 2)
	{
		while(argv[1][i])
		{
			last_word(argv[1]);
		}
	write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
	return(0);
}