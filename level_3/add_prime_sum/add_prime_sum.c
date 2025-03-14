#include <unistd.h>

int print_number(int num)
{
	char *str = "0123456789";
	
	if(num > 9)
		print_number(num / 10);
	write(1, &str[num % 10], 1);
}

int ft_atoi(char *str)
{
	int i = 0;
	int result = 0;

	while(str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return(result);
}

int prime(int n)
{
	int divisor = 2; //los numeros primos se obtienen dividiendo entre dos

	if(n <= 1) //menores a dos es imposible que sean primos
		return (0);
	while(divisor * divisor <= n)
	{
		if(n % divisor == 0) //si es divisible entre dos, no es primo
			return (0);
		divisor ++;
	}
	return(1);
}

int main(int argc, char **argv)
{
	int n = 0;
	int sum = 0;

	if((argc == 2) && (argv[1][0] != '-'))
	{
		n = ft_atoi(argv[1]);
		while (n >= 2) //empezamos en dos, porque uno no es primo
		{
		       if(prime(n))
		       		sum = sum + n;
		       n--;
		}
		print_number(sum);
	}
	else
		write(1, "0", 1);
	write(1, "\n", 1);
}

