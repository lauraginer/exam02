//#include <unistd.h>

/*void change(char *str)
{
        int i;
        char new_letter;

        i = 0;
        while(str[i])
        {
                if(str[i] >= 'A' && str[i] <= 'Z')
                {
                        write(1, "_", 1);
                        new_letter = str[i] + 32;
                        write(1, &new_letter, 1);
                }
                else
                        write(1, &str[i], 1);
                i++;
        }
}*/
int main (int argc, char **argv)
{
        if(argc == 2)
        {
                change(argv[1]);
                write(1, "\n", 1);
        }
        else
                write(1, "\n", 1);
}