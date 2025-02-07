#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int i;
	int result;
	int sign;

	sign = 1;
	result = 0;
	while(str[i] == ' ' || str[i] <= 13 && str[i] >= 9) //quita espacios
		i++;
	if(str[i] == '-')
		sign = -1;
	if(str[i] == '-' || str[i] == '+')
		i++;
	while(str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return(result * sign);
}
int main()
{
	const char *str;
	str = "pi";
	printf("%d\n", ft_atoi(str));
	printf("%d", atoi(str));
	return (0);
}