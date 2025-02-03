#include <unistd.h>

void print_number(int n)
{
	char str[10] = "0123456789";

	if(n > 9)
		print_number(n / 10);
	write(1, &str[n % 10], 1);
}

int main(int argc, char **argv)
{
	(void)argv;

	if (argc > 1)
		print_number(argc - 1);
	else
		write(1, "0", 1);
	write(1, "\n", 1);
	return (0);
}