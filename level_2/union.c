#include <unistd.h>

void ft_union(char *s1, char*s2)
{
	char tab[256] = {0};
	int i = 0;

	while (s1[i])
		tab[(int)s1[i++]] = 1; //se transforma el caracter a valores ascii y se suma uno a tab para indicar que existe
	i = 0;
	while (s2[i])
		tab[(int)s2[i++]] = 1; 
	i = 0;
	while (s1[i])
	{
		if (tab[(int)s1[i]] == 1) 
		{
			write(1, &s1[i], 1);
			tab[(int)s1[i]] = 2; //igualas a dos por si de nuevo existe el mismo caracter pasar de el
		}
		i++;
	}
	i = 0;
	while (s2[i])
	{
		if (tab[(int)s2[i]] == 1) 
		{
			write(1, &s2[i], 1);
			tab[(int)s2[i]] = 2;
		}
		i++;
	}
}
int main(int argc, char **argv)
{
	if(argc == 3)
		ft_union(argv[1], argv[2]);
	write(1, "\n", 1);
}
