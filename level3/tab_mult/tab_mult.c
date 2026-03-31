#include <unistd.h>

int ft_atoi(const char *str)
{
    int sign = 1;
    int result = 0;
    int i = 0;
    while(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;
    while (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign -= 1;
        i++;
    }
    while(str[i] >='0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    return (result * sign);
}

void putnbr (int n)
{
    char c;
    if(n >= 10)
        putnbr(n / 10);
    c = (n % 10) + '0';
    write(1,&c,1);
}

// void putnbr(int n)
// {
//     char c;

//     if (n >= 10)
//         putnbr(n / 10);
//     c = (n % 10) + '0';
//     write(1, &c, 1);
// }


// int main(int argc, char **argv)
// {
//     int n;
//     int i = 1;

//     if (argc != 2)
//     {
//         write(1, "\n", 1);
//         return (0);
//     }

//     n = ft_atoi(argv[1][0]);

//     while (i <= 9)
//     {
//         putnbr(i);
//         write(1, " x ", 3);
//         putnbr(n);
//         write(1, " = ", 3);
//         putnbr(i * n);
//         write(1, "\n", 1);
//         i++;
//     }
//     return (0);
// }
#include <unistd.h>
int main (int argc, char **argv)
{
    int n;
    int i = 1;
    if (argc !=2)
    {
        write(1, "\n",1);
        return (0);
    }
    n = ft_atoi(argv[1]);
    while(i <=9)
    {
        putnbr(i);
        write(1, &" x ", 3);
        putnbr(n);
        write(1, &" = ", 3);
        putnbr(i * n);
        write(1, &"\n", 1);
        i++;
    }
    return (0);
}