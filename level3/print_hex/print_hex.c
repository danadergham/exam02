int ft_atoi(const char *str)
{
    int sign = 1;
    int result = 0;

    while (*str == ' ' || (*str >= 9 && *str <= 13))
        str++;
    if (*str == '-' || *str == '+')
    {
        if (*str == '-')
            sign = -1;
        str++;
    }
    while (*str >= '0' && *str <= '9')
    {
        result = result * 10 + (*str - '0');
        str++;
    }
    return (result * sign);
}

// void print_hex(int n)
// {
//     char *hex = "0123456789abcdef";
//     if (n >= 16)
//         print_hex(n / 16);
//     write(1, &hex[n % 16], 1);
// }

// int main(int argc, char **argv)
// {
//     if(arc == 2)
//     {
//         int n = ft_atoi(argv[1]);
//         print_hex(n);
//     }
//     write(1,"\n",1);
// }
#include <unistd.h>
void print_hex (int n)
{
    char *hex = "0123456789abcdef";
    if(n >= 16)
        print_hex(n / 16);
    write(1,&hex[n%16],1);
}


int main(int argc , char **argv)
{
    if(argc == 2)
    {
        int n = ft_atoi(argv[1]);
        print_hex(n);   
    }
    write(1,"\n",1);  
}