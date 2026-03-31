int ft_to_lower(int c)
{
    if (c>='A' && c<= 'Z')
        c += 32;
    return (c);
}

int ft_to_upper(int c)
{
    if(c >= 'a' && c<= 'z')
        c-= 32;
    return (c);
}



#include <unistd.h>

// int ft_to_lower(int c)
// {
//     if (c >= 'A' && c <= 'Z')
//         c += 32;
//     return (c);
// }

// int ft_to_upper(int c)
// {
//     if (c >= 'a' && c <= 'z')
//         c -= 32;
//     return (c);
// }

// int main(int argc, char **argv)
// {
//     int i = 1;
//     int j;

//     if (argc < 2)
//     {
//         write(1, "\n", 1);
//         return (0);
//     }

//     while (i < argc)
//     {
//         j = 0;
//         while (argv[i][j])
//         {
//             char c = argv[i][j];

//             // step 1: make everything lowercase
//             c = ft_to_lower(c);

//             // step 2: if last letter of word → uppercase
//             if ((c >= 'a' && c <= 'z') &&
//                 (argv[i][j + 1] == ' ' ||
//                  argv[i][j + 1] == '\t' ||
//                  argv[i][j + 1] == '\0'))
//                 c = ft_to_upper(c);

//             write(1, &c, 1);
//             j++;
//         }
//         write(1, "\n", 1);
//         i++;
//     }
//     return (0);
// }


int main(int argc, char **argv)
{
    int i = 1;
    int j;
    if (argc < 2)
    {
        write(1,"\n",1);
        return (0);
    }
    while(i <argc)
    {
        j = 0;
        while(argv[i][j])
        {
            char c = argv[i][j];
            c = ft_to_lower(c);
            if((c >= 'a' && c <= 'z') && (argv[i][j+1] == ' ' || argv[i][j+1] == '\t' || argv[i][j+1] == '\0') )
                c = ft_to_upper(c);
            write(1, &c,1);
            j++;
        }
        i++;
        write(1,"\n",1);

    }
}