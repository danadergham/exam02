#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	main(int argc, char **argv)
{
	int		a;
	int		b;
	int		result;
	char	op;

	if (argc == 4)
	{
		a = atoi(argv[1]);
		b = atoi(argv[3]);
		op = argv[2][0];
		result = 0 ;

		if (op == '+')
			result = a + b;
		else if (op == '-')
			result = a - b;
		else if (op == '*')
			result = a * b;
		else if (op == '/')
		{
			if (b == 0)
				result = 0;
			else
				result = a / b;
		}
		else if (op == '%')
		{
			if (b == 0)
				result = 0;
			else
				result = a % b;
		}
		printf("%d", result);
	}
	write(1, "\n", 1);
	return (0);
}