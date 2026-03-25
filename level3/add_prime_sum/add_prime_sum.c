#include <unistd.h>
void ft_putchar(char c)
{
    write(1,&c,1);
}

void ft_putnbr(int nb)
{
    if (nb < 0)
    {
        ft_putchar('-');
        nb = -nb;
    }
    if (nb >= 10)
        ft_putnbr(nb / 10);
    ft_putchar((nb % 10) + '0');

}

int is_prime(int nb)
{
    int i;
    i = 0;
    if (nb < 2)
        return(0);
    while (i < nb)
    {
        if (nb % i == 0)
            return(0);
        i++;
    }
    return(1);
}

int ft_atoi(char *str)
{
    int i = 0;
    int res = 0;
    int sign = 1;
    while(str[i] == ' '  && str[i] >= 9 && str[i] <= 13)
        i++;
    if (str[i] == '-' || str[i] == '+')
    {        if (str[i] == '-')
            sign = -1;
        i++;
    }
    while(str[i] >= '0' && str[i] <= '9')
        {
            res = res * 10 + (str[i] - '0');
            i++;
        }
        return(res * sign);
}

int ft_add_prime_sum(int nb)
{
    int sum = 0;
    int i = 2;
    while (i <= nb)
    {
        if (is_prime(i))
            sum += i;
        i++;
    }
    return(sum);        
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        ft_putnbr(ft_add_prime_sum(ft_atoi(av[1])));
    }
    else
        ft_putchar('0');
    ft_putchar('\n');
    return(0);
}