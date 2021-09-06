int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n && (s1[i] && s2[i]))
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	if (i == n)
	{
		i--;
	}
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	char *a = "Hello!";
	char *b = "Hello2!";
	char *c = "Hello3!";
	char *d = "Hello!";

	printf("(First 4) Hello! == Hello2! : %d\n", ft_strncmp(a, b, 4));
	printf("(First 5) Hello! == Hello3! : %d\n", ft_strncmp(a, c, 5));
	printf("(All 6) Hello! == Hello! : %d\n", ft_strncmp(a, d, 6));
	printf("(All 6) Hello! == Hello! : %d\n", ft_strncmp(a, a, 6));

	char a2[] = "Hello!";
	char d2[] = "Hello!";

	printf("(First 3) Hello! == Hello! : %d\n", ft_strncmp(a2, d2, 3));
	printf("(First 3) Hello! == Hello! : %d\n", ft_strncmp(a2, a2, 3));

	char a3[] = "üHello!";
	char b3[] = "Hello!";
	char d3[] = "üHello!";

	printf("(First 1) üHello! == Hello! : %d\n", ft_strncmp(a3, b3, 1));
	printf("(First 1) üHello! == üHello! : %d\n", ft_strncmp(a3, d3, 1));
	printf("(First 2) üHello! == üHello! : %d\n", ft_strncmp(a3, a3, 2));
	
	char *aa = "Hello!";
	char *bb = "Hello2!";
	char *cc = "Hello3!";
	char *dd = "Hello!";

	printf("(First 4) Hello! == Hello2! : %d\n", ft_strncmp(aa, bb, 4));
	printf("(First 5) Hello! == Hello3! : %d\n", ft_strncmp(aa, cc, 5));
	printf("(All 6) Hello! == Hello! : %d\n", ft_strncmp(aa, dd, 6));
	printf("(All 6) Hello! == Hello! : %d\n", ft_strncmp(aa, aa, 6));

	char aa2[] = "Hello!";
	char dd2[] = "Hello!";

	printf("(First 3) Hello! == Hello! : %d\n", ft_strncmp(aa2, dd2, 3));
	printf("(First 3) Hello! == Hello! : %d\n", ft_strncmp(aa2, aa2, 3));

	char aa3[] = "üHello!";
	char bb3[] = "Hello!";
	char dd3[] = "üHello!";

	printf("(First 1) üHello! == Hello! : %d\n", ft_strncmp(aa3, bb3, 1));
	printf("(First 1) üHello! == üHello! : %d\n", ft_strncmp(aa3, dd3, 1));
	printf("(First 2) üHello! == üHello! : %d\n", ft_strncmp(aa3, aa3, 2));
}
*/
