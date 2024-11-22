#include <unistd.h>
#include <stdio.h>

void	rot_13(char letter)
{
	char new_letter;

	if (letter >= 'a' && letter <= 'm' || letter >= 'A' && letter <= 'M')
		new_letter = letter + 13;
	else if (letter >= 'n' && letter <= 'z' || letter >= 'N' && letter <= 'Z')
		new_letter = letter - 13;
	else
		new_letter = letter;
	write(1, &new_letter, 1);
}
int main (int argc, char **argv)
{
	int	i;
	i = 0;
	if(argc == 2)
	{
		while (argv[1][i])
		{
			rot_13(argv[1][i]);
			i++;
		}
	}
	write (1, "\n", 1);
	return(0);
}



