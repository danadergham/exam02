#include <unistd.h>
int ft_strlen (char *str)
{
    int i = 0;
    while (str[i])
    {
        i++;
    }
    return (i);
}
int main(void)
{
    char str[] = "hello";
    int len = ft_strlen(str);
    char c = len + '0';
    write(1, &c, 1);
    return (0);
}