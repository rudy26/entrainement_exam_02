#include <unistd.h>
int is_space(char c)
{
    return(c == ' ' || c == '\t');
}
int main(int ac, char **av)
{
    int i = 0;
    int start_first;
    int start;
    int end;
    int first = 1;

    if(ac > 1)
    {
        while(is_space(av[1][i]))
            i++;
        start_first = i;
        
        while(av[1][i] && !is_space(av[1][i]))
            i++;
        end = i - 1;
        while(av[1][i])
        {
            while(is_space(av[1][i]))
                i++;
            start = i;
            while(av[1][i] && !is_space(av[1][i]))
                i++;
            if(start< i)
            {
                if(!first)
                    write(1," ", 1);
                first = 0;

                while(start< i)
                    write(1, &av[1][start++],1);
                
            }
        }
        if(end>= start_first)
        {
            if(!first)
                write(1, " ", 1);
            first = 0;
            while (end>= start_first)
            {
                write(1, &av[1][start_first], 1);
                start_first++;
            }
        }

    }
    write(1,"\n",1);
}