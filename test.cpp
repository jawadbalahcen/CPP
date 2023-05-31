
#include <cctype>
#include <iostream>
#include <fstream>




int	main(void)
{
int i;
	std::cin >> i;

	switch (i)
	{
		case 0:
			std::cout << "0\n";
		case 1:
			std::cout << "1\n";
		case 2:
			std::cout << "2\n";
		case 3:
			std::cout << "3\n";
		case 4:
			std::cout << "4\n";
		case 5:
			std::cout << "5\n";
	}

	return (0);
}