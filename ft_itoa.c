#include "libft.h"

int n_len(int n)
{
    int len = 0;
    if (n == -2147483648)
        return (11);
    if (n < 0)
    {
        n *= -1;
        len++;
    }
    while (n > 0)
    {
        n /= 10;
        len++;
    }
    return (len);
}

void sp_case(char *nbr, int len)
{
    int i = 0;
    while (i < len)
    {
        nbr[i] = "-2147483648"[i];
        i++;
    }
    nbr[i] = '\0';
}
char *ft_itoa(int n)
{
    int i = 0;
    int p;
    int len = n_len(n);
    char *nbr = (char *)malloc(len + 1);
    if (nbr == NULL)
        return (NULL);
    if (n == -2147483648)
    {
        sp_case(nbr, len);
        return (nbr);
    }
    if (n < 0)
    {
        *nbr = '-';
        nbr++;
    }
    while (n > 0)
    {
        p = n % 10;
        n /= 10;
        nbr[len - i - 1] = p + 48;
        i++;
    }
    nbr[len] = '\0';
    return (nbr);
}