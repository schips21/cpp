#include <iostream>

void	letters_up(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		std::cout << (char)std::toupper(str[i]);
		i++;
	}
}

int		main(int argc, char *argv[])
{
	int	i;

	i = 1;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		while (argv[i])
		{
			letters_up(argv[i]);
			i++;
		}
	}
	std::cout << std::endl;
	return (0);
}