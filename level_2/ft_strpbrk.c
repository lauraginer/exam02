#include <stdio.h>
#include <string.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int i = 0;
	int j;
	char *temp = (char*) s1;

	while(temp[i])
	{
		j = 0;
		while(s2[j])
		{
			if(temp[i] == s2[j])
				return(&temp[i]);
			j++;
		}
		i++;
	}
	return(NULL);
}
int main()
{
	char *s1 = "hola bien";
	char *s2 = "kwybtjo";
	printf("original: %s\n", strpbrk(s1, s2));
	printf("mio: %s\n", ft_strpbrk(s1, s2));
}