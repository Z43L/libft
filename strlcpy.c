unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int contador;
	unsigned int index;

	contador = 0;
	index = 0;
	while (src[contador] != '\0')
		contador++;
	if (size != 0)
	{
		while (src[index] != '\0' && index < (size - 1))
		{
			dest[index] = src[index];
			index++;
		}
		dest[index] = '\0';
	}
	return (contador);
}