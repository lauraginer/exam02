//#include <unistd.h>

/*void ultstr (char letter)
{
	char	new_letter;

	if(letter >= 'a' && letter <= 'z')
		new_letter = letter - 32;
	else if(letter >= 'A' && letter <= 'Z')
		new_letter = letter + 32;
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
			ultstr(argv[1][i]);
			i++;
		}
	}
	else
		write(1, "\n", 1);
	return(0);
}

