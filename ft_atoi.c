#include "libft.h"

int ft_atoi(char *str)
{
    int i = 0;
    int s = 1;
    int rsl = 0;
    while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
    {
        i++;
    }
    if (str[i] == '+')
    {
        i++;
    }
    else if (str[i] == '-')
    {
        s = -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        rsl = (rsl * 10) + (str[i] - 48);
        i++;
    }
    return (s * rsl);
}