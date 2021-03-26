#include <iostream>

void	print_upper(std::string str)
{
	std::string::size_type i = 0;

	while (i < str.length())
	{
		std::cout << (char)toupper(str[i]);
		i++;
	}
}

int main(int ac, char* av[])
{
	int i;

	i = 1;
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return (0);	
	}
	while (i < ac)
	{
		print_upper(av[i]);
		i++;
	}
	std::cout << "\n";
	return (0);
}
