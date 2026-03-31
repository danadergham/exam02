#include <unistd.h>
int ft_to_lower(int c)
{
    if(c >= 'A' && c <= 'Z')
        c+= 32;
    return(c);
}

int ft_to_upper(int c)
{
    if (c >= 'a' && c <= 'z')
        c -= 32;
    return(c);
}

int main (int argc , char **argv)
{
    int i = 1;
    int j ;
    if (argc < 2)
    {
        write(1,"\n",1);
        return (0);
    }
    while(i < argc)
    {
        j = 0;
        while(argv[i][j])
        {
            char c = argv[i][j];
            c = ft_to_lower(c);
            if((c >= 'a' && c <= 'z') && j == 0 || argv[i][j - 1] == ' ' || argv[i][j-1] == '\t')
                c = ft_to_upper(c);
           // argv[i][j] = ft_to_upper(argv[i][j]);
           write(1, &c,1);
            j++;
        }
        i++;
        write(1,"\n",1);
    }
}