#include <unistd.h>
#include <stdio.h>
int	ft_str_is_numeric(char *str)
{
	int i;
	int check;

	i = 0;
	check = 1;
	while (str[i])
	{
		if (str[i] > '9' || str[i] < '0')
			check = 0;
		i++;
	}
	return check;
 }

int main(void)
{
	char *s = "1234567890a";
	printf("%d",ft_str_is_numeric(s));
}
