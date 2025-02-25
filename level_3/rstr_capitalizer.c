#include <unistd.h>
#include <stdio.h>

void rc(char *str)
{
	int i = 0;

	while(str[i])
	{
		if((str[i + 1] == ' ' || (str[i + 1] >= 9 && str[i + 1] <= 13)) || (i == 0) || (str[i + 1] == '\0'))
		{
			if(str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
		}
		else if(str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		write(1, &str[i], 1);
		i++;
	}
}
int main(int argc, char **argv)
{
	int i;

	i = 1;
	while(argc > i)
	{
		rc(argv[i]);
		i++;
		write(1, "\n", 1);
	}
	write(1, "\n", 1);
}