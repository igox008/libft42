#include "libft.h"

int count_w(char *str, char c)
{
    int i = 0;
    int cnt = 0;
    while (str[i])
    {
        while (str[i] == c)
            i++;
        if (str[i] != '\0')
            cnt++;
        while (str[i] != c)
            i++;
    }
    return (cnt);
}

char *ft_strndup(const char *str, size_t s)
{
    size_t i = 0;
    char *dup = (char *)malloc(s + 1);
    if (dup == NULL)
        return (NULL);
    while (i < s)
    {
        dup[i] = str[i];
        i++;
    }
    dup[i] = '\0';
    return (dup);
}
char **ft_strsplit(char const *s, char c)
{
    size_t i = 0;
    int index = 0;
    int words_c = count_w((char *)s, c);
    char **arr = (char **)malloc(words_c + 1);
    if (arr == NULL)
        return (NULL);
    while (*s)
    {
        i = 0;
        while (*s == c)
            s++;
        while (*(s + i) != 0)
            i++;
        arr[index] = ft_strndup(s, i);
        s += i;
        index++;
    }
    arr[index] = NULL;
    return (arr);
}