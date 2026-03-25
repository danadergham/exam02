// #include <unistd.h>

// int	main(int argc, char **argv)
// {
// 	int	i;
// 	int	space;

// 	if (argc != 2)
// 		return (write(1, "\n", 1), 0);

// 	i = 0;
// 	space = 0;

// 	// skip leading spaces/tabs
// 	while (argv[1][i] == ' ' || argv[1][i] == '\t')
// 		i++;

// 	while (argv[1][i])
// 	{
// 		// if we hit space/tab, set flag
// 		if (argv[1][i] == ' ' || argv[1][i] == '\t')
// 			space = 1;
// 		else
// 		{
// 			// print one space before next word if needed
// 			if (space)
// 			{
// 				write(1, " ", 1);
// 				space = 0;
// 			}
// 			write(1, &argv[1][i], 1);
// 		}
// 		i++;
// 	}

// 	write(1, "\n", 1);
// 	return (0);
// }

#include <unistd.h>
int main(int argc, char **argv)
{
    if (argc == 2)
    {
        int i = 0;
        int space = 0;
        while(argv[1][i] == ' '|| argv[1][i] == '\t')
            i++;
        while(argv[1][i])
        {
            if(argv[1][i] == ' '|| argv[1][i] == '\t')
                space = 1;
            else
            {
                if(space == 1)
                {
                    write(1," ",1);
                    space = 0;
                }
                write(1,&argv[1][i],1);
                
            }
            i++;
        }
        write(1, "\n", 1);
    }
    return (0);
}