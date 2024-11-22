#include <unistd.h>

void cojones (char c)
{
	char new_c;
	
	if(c >= 'a' && c <= 'm' || c >= 'A' && c <= 'M')
		new_c = c + 13;
	else if(c <= 'z' && c >= 'n' || c <= 'Z' && c >= 'N')
		new_c = c - 13;
	else
		new_c = c;
	write(1, &new_c, 1);
}

int main (int argc, char **argv)
{
	int i;

	i = 0;
	if(argc == 2)
	{
		while(argv[1][i])
		{
			cojones(argv[1][i]);
			i++;
		}
	}
	write(1, "\n", 1);
	return(0);
}

