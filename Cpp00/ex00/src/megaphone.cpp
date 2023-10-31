#include <cctype>
#include <iostream>

int main(int nb_args, char **args) 
{
	int i;
	int j;

	i = 1;
	if (nb_args <= 1 || !args)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		while (args[i])
		{
			j = 0;
			while(args[i] &&  args[i][j])
			{
				std::cout << (char)std::toupper(args[i][j]);
				j++;
			}
			i++;
		}
	}
	std::cout << "\n";
	return (0);
}