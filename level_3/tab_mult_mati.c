#include <stdio.h>
#include <unistd.h>

int ft_atoi(char *str)
{
	int i = 0;
	int num;
	num = 0;
	while(str[i])
	{
		num = num * 10 + str[i] - '0';
		i++;
	}
	return(num);
}

void print_n(int n)
{
	char *str = "0123456789";

	if(n > 9)
		print_n(n / 10);
	write(1, &str[n % 10], 1);
}

int main(int argc, char **argv)
{
	int i;

	i = 1;
	if(argc == 2)
	{
		while(i <= 9)
		{
			print_n(i);
			write(1," x ", 3);
			print_n(ft_atoi(argv[1]));
			write(1," = ",3);
			print_n(ft_atoi(argv[1]) * i);
			write(1,"\n", 1);
			i++;
		}
	}
	else
		write(1, "\n", 1);
}