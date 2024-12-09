//#include <stdio.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int i;
	int j;

	i = 0;
	while(s[i])
	{
		j = 0;
		while(reject[j])
		{
			if(s[i] == reject[j])
				return(i);
			j++;
		}
		i++;
	}
	return(i);
}

/*int main ()
{
	char *s1;
	char *s2;
	int result;

	s1 = "como estas?";
	s2 = "?";
	result = ft_strcspn(s1, s2);
	printf("la longitud resultante es: %d\n", result);
	return (0);
}*/

while(s[i] && reject[j])
	{
		i = 0;
		j = 0;
		if(s[i] == reject[j])
			return(i);
		j++;
		i++;
	}