//#include <unistd.h>

/*void print_number(int i)
{
	char	str[10] = "0123456789"; //convertimos los digitos del numero en caracter

	if (i > 9)
		print_number(i / 10);
	write (1, &str[i % 10], 1);
}*/

int main()
{
    int i = 1;
    while (i <= 100)
    {   
		if (i % 3 == 0 && i % 5 == 0)
			write(1,"FizzBuzz\n", 9);
    	else if (i % 3 == 0)
		{
			write(1, "Fizz\n", 5);
		}
   		else if (i % 5 == 0)
		{
			write(1,"Buzz\n", 5);
		}
   		else
		{
			print_number(i);
			write(1, "\n", 1);
		}
        i++;
		
    }
    return 0;
}