#include <unistd.h>

int ft_isspace(char c) {
	return (c == 32 || (c >= 9 && c <= 13));
}

int ft_toupper(char c) {
	if (c >= 'a' && c <= 'z')
		return (c -= 32);
	else
		return (c);
}

int ft_tolower(char c) {
	if (c >= 'A' && c <= 'Z')
		return (c += 32);
	else
		return (c);
}

void	str_capitalizer(char *str)
{
	int i = 0;

	while (str && str[i]) 
	{
		while (str[i] && ft_isspace(str[i]) == 1) 
			i++;
		if (str[i]) 
		{
			str[i] = ft_toupper(str[i]);
			i++;
		}
		while (str[i] && ft_isspace(str[i]) == 0) 
		{
			str[i] = ft_tolower(str[i]);
			i++;
		}
	}
}

int ft_strlen(char *str) {
	int i = 0;
	while (str && str[i]) 
		i++;
	return (i);
}

int main(int argc, char **argv)
{
	int n;

	n = 1;
	if (argc < 2)
		write(1, "\n", 1);
	while (n < argc)
	{
		str_capitalizer(argv[n]);
		write(1, argv[n], ft_strlen(argv[n]));
		write(1, "\n", 1);
		n++;
	}
}			
