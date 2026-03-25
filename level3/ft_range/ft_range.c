#include <stddef.h>
#include <stdlib.h>

int     *ft_range(int start, int end)
{
    int *range;
    int i;

    if (start >= end)
        return (NULL);
    range = (int *)malloc(sizeof(int) * (end - start ));
    if (!range)
        return (NULL);
    i = 0;
    while (start <= end)
    {
        range[i] = start;
        start++;
        i++;
    }
    return (range);
}

int *ft_range(int start, int end)
{
    int *range;
    int i;

    if(start >= end)
        return (NULL);
    range = (int *)malloc(sizeof(int)*(end - start));
    if(!range)
        return(NULL);
    i = 0;
    while(start <= end)
    {
        range[i] = start;
        start++;
        i++;
    }
    return(range);
}

int *ft_range(int start, int end)
{
    int *range;
    int i;

    if (start >= end)
        return (NULL);
    range = (int *)malloc(sizeof(int) * (end - start));
    if (!range)
        return (NULL);
    i = 0;
    while (start < end)
    {
        range[i] = start;
        start++;
        i++;
    }
    return (range);
}

















#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int start, int end);

int	main(void)
{
	int start = 3;
	int end = 7;
	int *arr;
	int i;

	arr = ft_range(start, end);
	if (!arr)
	{
		printf("NULL\n");
		return (0);
	}

	for (i = 0; i < (end - start +1); i++)
		printf("%d ", arr[i]);

	free(arr);
	return (0);
}