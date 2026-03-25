int	ft_atoi_base(const char *str, int str_base)
{
	int		i;
	int		sign;
	int		result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			result = result * str_base + (str[i] - '0');
		else if (str[i] >= 'A' && str[i] <= 'Z')
			result = result * str_base + (str[i] - 'A' + 10);
		else if (str[i] >= 'a' && str[i] <= 'z')
			result = result * str_base + (str[i] - 'a' + 10);
		else
			break;
		i++;
	}
	return (result * sign);
}


int ft_atoi_base(const char *str, int str_base)
{
    int i = 0;
    int sign = 1;
    int result = 0;
    while(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;
    if(str[i] == '-' || str[i] == '+')
    {
        if(str[i] == '-')
            sign  *= -1;
        i++;
    }
    while(str[i])
    {
        if(str[i] >= '0' && str[i] <='9')
            result = result*str_base + (str[i] - '0');
        else if(str[i] >= 'A' && str[i] <= 'Z')
            result = result*str_base + (str[i] - 'A' + 10);
        else if(str[i] >= 'a' && str[i] <= 'z')
            reuslt = result*str_base + (str[i] - 'a' + 10);
        else
            break;
        i++;
    }
    return (result * sign);
}