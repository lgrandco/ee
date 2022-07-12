char	*ft_strcpy(char *dest, char *src)
{
	int i;
	i=0;
	dest=src;
	while (dest[i])
		i++;
	dest[i]='\0';
	return(dest);
}
