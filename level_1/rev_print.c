#include <unistd.h>

char *rev_print(char *str)
{
	int i;
	int len;

	len = 0;
	while(str[len])
		len++;
	i = len - 1; //situarlo antes del caracter nulo
	while(str[i] != 0)
	{
		write(1, &str[i], 1);
		i--;
	}
	return(str);
}

int main()
{
  rev_print("Hello world");
  write (1, "\n", 1);
  rev_print("tnirp esreveR");
  write (1, "\n", 1);
  rev_print("");
  write (1, "\n", 1);
}