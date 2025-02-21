#include <unistd.h>

void es(char *str)
{
	int i = 0;

	while(str[i] && (str[i] == ' ' || str[i] >= 9 && str[i] <= 13))
		i++;
	while(str[i])
	{
		if((str[i] == ' ' || str[i] >= 9 && str[i] <= 13) && (str[i + 1] >= 33 && str[i + 1] <= 126))
		{
			//write(1, "  ", 2);
		}
		else if(str[i] == ' ' || str[i] >= 9 && str[i] <= 13)
			i++;
		write(1, &str[i], 1);
		i++;
	}
	if(str[i] == ' ' && str[i +1] == '\0')
		i++;
}

int main(int argc, char **argv)
{
	int i = 0;
	if(argc == 2)
		es(argv[1]);
	write(1, "\n", 1);
}
