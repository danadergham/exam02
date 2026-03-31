
#include <stdlib.h>
#include <stdio.h>
int     *ft_rrange(int start, int end)
{
    int *range;
    int i;

    if (start >= end)
        return (NULL);
    range = (int *)malloc(sizeof(int) * (end - start ));
    if (!range)
        return (NULL);
    i = 0;
    while (end >= start )
    {
        range[i] = end ;
        end--;
        i++;
    }
    return (range);
}



// int     *ft_rrange(int start, int end);

// int main(void)
// {
//     int start = 2;
//     int end = 7;
//     int *arr;
//     int size;
//     int i;

//     arr = ft_rrange(start, end);
//     if (!arr)
//     {
//         printf("Memory allocation failed or invalid range.\n");
//         return (1);
//     }

//     size = end - start;
//     i = 0;
//     while (i <= size )
//     {
//         printf("%d ", arr[i]);
//         i++;
//     }
//     printf("\n");

//     free(arr);
//     return (0);
// }