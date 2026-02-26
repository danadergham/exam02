#include <stddef.h>
size_t ft_strcspn( const char *s, const char *reject)
{
    size_t i;
    size_t j ;
    i = 0;
    while(s[i])
    {
        j = 0;
        while(reject[j])
        {
            if (s[i] == reject[j])
                return (i);
            j++;

        }
        i++;
    }
    return(i);
}


#include <stddef.h>

// size_t	ft_strcspn(const char *s, const char *reject)
// {
// 	size_t	i;
// 	size_t	j;

// 	i = 0;
// 	while (s[i])
// 	{
// 		j = 0;
// 		while (reject[j])
// 		{
// 			if (s[i] == reject[j])
// 				return (i);
// 			j++;
// 		}
// 		i++;
// 	}
// 	return (i);
// }
#include <stdio.h>

int main()
{
    const char str[] = "Hello";
    const char reject[] = "x";
    size_t result = ft_strcspn(str, reject);
    printf("The length of the initial segment is: %lu\n", result);
    return 0;
}