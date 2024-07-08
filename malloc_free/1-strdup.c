char *_strdup(char *str)
{
	char *array;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	array = malloc(sizeof(char) * sizeof(str));
	for (i = 0; str[i] != '\0'; i++)
	{
		array[i] = str[i];
	}
	if (array == NULL)
	{
		return (NULL);
	}
	return (array);
}
