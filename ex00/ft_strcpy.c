#include<unistd.h>
#include <stdio.h>
char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src [i];
		i++;
	}
	while (dest[i] != '\0')
	{
		dest[i] = '\0';
		i++;
	}
	return dest;
}

int main()
{
	char s1[10] = "hello";
	char s2[15] = "world hello";

	ft_strcpy(s2, s1);

	printf("%s\n", s2);
	return 0;
}
