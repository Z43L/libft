void ft_strstr(char *str1, char *str2)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while(str1[i] != '\0')
    {
        if(str1[i] == str2[j])
        {
            j++;
        }
        else
        {
            j = 0;
        }
        if(str2[j] == '\0')
        {
            return (str1[i - j]);
        }
        i++;
    }
    return (0);
}