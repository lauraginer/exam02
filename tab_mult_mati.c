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

void print_n(int num)
{
	char *base = "0123456789";

	if (num <= 9)
		write(1,&base[num],1);
	else
	{
		print_n(num / 10);
		print_n(num % 10);
	}
}

int main(int argc,char **argv)
{
	int i = 1;
	if(argc == 2)
	{
		while(i <= 9)
		{
			print_n(i);
			write(1," X ",3);
			print_n(ft_atoi(argv[1]));
			write(1," = ",3);
			print_n(ft_atoi(argv[1]) * i);
			write(1,"\n",1);
			i++;
		}
	}
	else
		write(1, "\n", 1);
}