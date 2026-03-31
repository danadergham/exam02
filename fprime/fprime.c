int ft_atoi(const char *str)
{
    int sign = 1;
    int result = 0;
    int i = 0;

    while(str[i] == ' '|| str[i] >= 9 && str[i] <= 13)
        i++;
    while(str[i] == '-' || str[i] == '+')
    {
        if(str[i] == '-')
            sign *= -1;
        i++;
    }
    while(str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    return (result * sign);
}
#include <stdio.h>
#include <unistd.h>
int main (int argc, char **argv)
{
    int n;
    int i = 2;

    if (argc != 2)
    {
        write(1, "\n", 1);
        return (0);
    }
    n = ft_atoi(argv[1]);
    if (n == 1)
    {
        printf("1\n");
        return (0);
    }
    while ( n > 1)
    {
        if (n % i == 0)
        {
            printf("%d", i);
            n = n / i;
            if( n > 1)
                printf("*");
        }
        else 
            i++;
    }
    printf("\n");
     return (0);    
}