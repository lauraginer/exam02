#include <unistd.h>

void repeat_alpha (char letter)
{
	int	repeat_count;
	if(letter >= 'a' && letter <= 'z' || letter >= 'A' && letter <= 'Z')
		repeat_count = letter - 'a' + 1;
	else
		repeat_count = 1;
	while(repeat_alpha > 0)
	{
		write(1, &letter, 1);
		repeat_count--;
	}
}

int main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while(argv[1][i])
		{
			repeat_alpha(argv[1][i]);
			i++;
		}
	}
	else
		write(1, "\n", 1);
	return(0);
}
