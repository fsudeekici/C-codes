#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] -= 32;
		i++;
	}
	return (str);
}
char	*ft_strcapitalize(char *str)
{
	int i;
	int ilk;

	i = 0;
	ilk = 1;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (ilk = 1)
				str[i] -= 32;
			ilk = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			ilk = 0;
		else
			ilk = 1;
		i++;
	}
	return (str);
}
