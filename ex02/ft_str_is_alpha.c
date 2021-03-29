#include <unistd.h>
#include <stdio.h>
int	ft_str_is_alpha(char *str)
{
	int i;
	int check;

	i = 0;
	check = 1;

	while (str[i])
	{
		if (str[i] < 'A' || str[i] > 'z' || (str[i] < 'a' && str[i] > 'Z'))
			check = 0;
		i++;
	}
	return check;
}

int main(void)
{
	char *s = "AzZ";
	printf("%d",ft_str_is_alpha(s));
}
