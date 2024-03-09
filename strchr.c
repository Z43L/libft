void strchr(char *str, char letbus)
{
    int i;

    i = 0;
    while(str[i] != '\0' && str[i] == letbus)
    {
        i++;
    }
    return (str[i]);
}