#include <unistd.h>

int ft_atoi(char *str)
{
	int i;
	int num;

	i = 0;
	num = 0;
	while(str[i])
	{
		num = num * 10 + str[i] - '0'; //la linea esencial
		i++;
	}
	return(num);
}
void print_hex(int n)
{
	char *str = "0123456789abcdef";

	if(n > 16)
		print_hex(n / 16);
	write(1, &str[n % 16], 1);
}

int main(int argc, char **argv)
{
	if(argc == 2)
		print_hex(ft_atoi(argv[1]));
	write(1, "\n", 1);
}