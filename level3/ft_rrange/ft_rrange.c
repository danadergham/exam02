int     *ft_rrange(int start, int end)
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
https://github.com/48d31kh413k/1337-exam_rank_02-42/blob/main/Level_03/lcm/lcm.subject.en.txt