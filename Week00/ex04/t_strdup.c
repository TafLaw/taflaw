
char	*t_strdup(const char *s)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s[i]) //string length
		i++;
	s1 = (char*)malloc(sizeof(*s1) * (i + 1));
	while (j < i)
	{
		s1[j] = s[j];
		j++;
	}
	return (s1);
}
