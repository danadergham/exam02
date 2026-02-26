// #include <unistd.h>

// void ft_repeat_alpha (char *str)
// {
//     int i = 0;
//     int letter;
//     while (str[i])
//     {
//         letter = 0;
//         if(str[i] >= 'A' && str[i] <= 'Z')
//             letter = str[i] - 'A' +1;
//         else if (str[i] >= 'a' && str[i] <= 'z')
//             letter = str[i] - 'a' +1;
//         else
//          letter = 1;
//         while(letter --)
//             write(1, &str[i], 1);
//         i++;
//     }

// }

// int main(int argc, char *argv[])
// {
// 	if (argc == 2)					
// 		ft_repeat_alpha(argv[1]);
// 	write(1, "\n", 1);				
// 	return (0);
// }						
//gcc repeat_alpha/repeat_alpha.c && ./a.out "yruewi"


#include <unistd.h>

int		main(int argc, char *argv[])		
{
	int		i;								
	int		letter;							
											

	i = 0;									
	if (argc == 2)							
											
		while (argv[1][i])					
		{
			letter = 0;											
			if (argv[1][i] >= 'A' && argv[1][i] <='Z')			
			{
				letter = argv[1][i] - 64;						
				while (letter--)								
					write(1, &argv[1][i], 1);				
			}
			else if (argv[1][i] >= 'a' && argv[1][i] <= 'z')	
            {
				letter = argv[1][i] - 96;						
				while (letter--)								
					write(1, &argv[1][i], 1);
			}					
            else												
                write(1, &argv[1][i], 1);						
			i++;												
		}
	
	write(1, "\n", 1);						
	return (0);					
}