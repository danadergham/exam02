#include <unistd.h>


int main(void)
{
    int i = 1;
    while(i <= 100)
    {
        if(i % 3 == 0 && i % 5 == 0)
            write(1,"fizzbuzz\n", 9);
        else if (i % 3 == 0)
            write(1,"fizz\n",5);
        else if (i % 5 == 0)
            write(1,"buzz\n",5);
        else
        {
            char c = i + '0';
            write(1, "\n",1);
        }
        i++;
    }
    return (0);
}
//gcc fizzbuzz/fizzbuzz.c && ./a.out