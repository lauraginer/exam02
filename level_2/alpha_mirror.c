//#include <unistd.h>

/*void alpha_mirror(char letter)
{
	char	new_letter;

	if(letter >= 'a' && letter <= 'z')
		new_letter = ('a' + 'z') - letter;
	else if(letter >= 'A' && letter <= 'Z')
		new_letter = ('A' + 'Z') - letter;
	else
		new_letter = letter;
	write(1, &new_letter, 1);
}*/

int main (int argc, char **argv)
{
	int i;

	i = 0;
	if(argc == 2)
	{
		while(argv[1][i])
		{
			alpha_mirror(argv[1][i]);
			i++;
		}
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
	return(0);
}