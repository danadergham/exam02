// int ft_strcmp(char *s1, char *s2)
// {
//     int i = 0;
//     while (s1[i] != '\0' && s2[i] != '\0')
//     {
//         if (s1[i] != s2[i])
//             return (s1[i] - s2[i]);
//         i++;
//     }
//     return (s1[i] - s2[i]);
// }

// int ft_strcmp(char *s1, char *s2)
// {
//     int i = 0;
//     while (s1[i] && s2[i])
//     {
//         if (s1[i] != s2[i])
//             return (s1[i] - s2[i]);
//         i++;
//     }
//     return (s1[i] - s2[i]);
// }

int ft_strcmp(char *s1, char *s2)
{
    int i = 0;
    while (s1[i] && s2[i])
    {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        i++;
    }
    return (s1[i] - s2[i]);
}
int main()
{
    char str1[] = "Hello";
    char str2[] = "Hello";
    char str3[] = "Hellp";
    char str4[] = "Helln";

    int result1 = ft_strcmp(str1, str2);
    int result2 = ft_strcmp(str1, str3);
    int result3 = ft_strcmp(str1, str4);

    printf("Comparing '%s' and '%s': %d\n", str1, str2, result1);
    printf("Comparing '%s' and '%s': %d\n", str1, str3, result2);
    printf("Comparing '%s' and '%s': %d\n", str1, str4, result3);

    return 0;
}




//  • 0, if the s1 and s2 are equal;

//        • a negative value if s1 is less than s2;

//        • a positive value if s1 is greater than s2.