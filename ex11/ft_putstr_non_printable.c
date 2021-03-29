#include<unistd.h>
void	ft_putstr_non_printable(char *str)
{
	int i;
	int b;
	int f;
	char *c;

	i = 0;
	c = "0123456789abcdef";
	while (str[i])
	{
		if (str[i] < '!')
		{
			b = str[i] / 16;
			f = str[i] % 16;
			if (str[i] == ' ')
				write(1, " ", 1);
			else
			{
				write(1, "\\", 1);
				write(1, &c[b], 1);
				write(1, &c[f], 1);
			}
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}

int main(void)
{
	char c[] = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(c);
}
