#include <unistd.h>

void ro(char *str)
{
	int i = 0;
	int j;
	int	o;
	int n = 0;
	int flag = 0;
	int flag2 = 0;

	while(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	j = i;
	while(str[i] != ' ' || (str[i] < 9 && str[i] > 13))
		i++;
	o = i;
	n = i;
	flag2 = 1;
	while(str[i])
	{
		if(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		       flag = 1;
		else if(!(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)) && flag == 1)
		{
			if (flag2 == 0)
			{
				write (1, " ", 1);
			}
			flag2 = 0;
			flag = 0;
			write(1, &str[i], 1);
			n++;
		}
		else if(str[i] != ' ' || (str[i] < 9 && str[i] > 13))
		{
			write(1, &str[i], 1);
			n++;
		}
		i++;
	}
	if (n > o)
		write(1, " ", 1);

	while (str[j] != ' ' || (str[j] < 9 && str[j] > 13))
	{
		write(1, &str[j], 1);
		j++;
	}
}


int main(int argc, char **argv)
{
	if(argc > 1)
		ro(argv[1]);
	write(1, "\n", 1);
}
