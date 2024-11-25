//#include <unistd.h>

/*void rotone(char letter)
{
	char	new_letter;

	if(letter >= 'a' && letter <= 'y' || letter >= 'A' && letter <= 'Y')
		new_letter = letter + 1;
	else if (letter == 'z' || letter == 'Z')
		new_letter = letter - 25;
	else
		new_letter = letter;
	write(1, &new_letter, 1);
}*/
int main(int argc, char **argv)
{
	int i;

	i = 0;
	if(argc == 2)
	{
		while(argv[1][i])
		{
			rotone(argv[1][i]);
			i++;
		}
	}
	else
		write(1, "\n", 1);
	return(0);
}