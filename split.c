#include <stdlib.h>

static char *fill_word(const char *s, char c, int start, int end);
static int  count_words(const char *s, char c);

char    **ft_split(const char *s, char c)
{
    char **res;
    int i = 0;
    int j = 0;
    int in_word = 0;
    int s_index = 0;

    res = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
    if(!res)
        return (NULL);

    while (s[i])
    {
        if (s[i] != c && !in_word)
        {
            in_word = 1;
            s_index = i;
        }
        if (in_word && (s[i + 1] == c || s[i + 1] == '\0'))
        {
            res[j] = fill_word(s, c, s_index, i + 1);
            j++;
            in_word = 0;
        }
        i++;
    }
    return (res);
}

static char *fill_word(const char *s, char c, int start, int end)
{
    int i = 0;
    char    *res;
    res = (char *)malloc((end - start + 1) * sizeof(char));
    if (!res)
        return (NULL);
    while (start < end)
    {
        res[i] = s[start];
        i++;
        start++;
    }
    res[i] = 0;
    return (res);
}

static int  count_words(const char *s, char c)
{
    int count = 0;
    int in_word = 0;

    while (*s)
    {
        if (*s != c && !in_word)
        {
            count++;
            in_word = 1;
        }
        else if (*s == c)
        {
            in_word = 0;
        }
        s++;
    }
    return (count);
}
#include <stdio.h>
int main(void)
{
    char *str = " Eu gosto de suco de maçã e também de baguetes ";
    char **res = ft_split(str, ' ');
    int i = 0;
    while(res[i])
    {
        printf("%s\n", res[i]);
        i++;
    }
    return (0);
}