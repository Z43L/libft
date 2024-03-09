void strlen(char *str)
{
    int count;

    while(*str != '\0')
    {
        count++;
    }
    return (count);
}