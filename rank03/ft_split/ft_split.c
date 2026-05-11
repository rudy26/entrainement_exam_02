#include <stdlib.h>

int is_space(char c)
{
    return(c == ' ' || c == '\t');
}

int count(char *str)
{
    int  i = 0;
    int count = 0;

    while(str[i])
    {
        while(is_space(str[i]))
            i++;
        if(str[i])
            count++;
        while (str[i] &&!is_space(str[i]))
            i++;
    }
    return(count);
}

char *dup(char *str, int start, int len)
{
    char *word = malloc(len +1);
    int i = 0;

    if(!word)
        return(NULL);
    while (i<len)
    {
        word[i] = str[start + i];
        i++;
    }
    word[i] = '\0';
    return(word);
}

char    **ft_split(char *str)
{
    char **split = malloc(sizeof(char *) * (count(str) +1));
    int i = 0;
    int j = 0;
    int start;

    if (!split)
        return(NULL);
    while(str[i])
    {
        while (is_space(str[i]))
            i++;
        start = i;
        while(str[i] && !is_space(str[i]))
            i++;
        if(i>start)
            split[j++] = dup(str, start, i-start);
    }
    split[j] = '\0';
    return(split);
}