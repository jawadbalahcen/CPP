
#include <cctype>
#include <iostream>
#include <fstream>

class F
{
  public:
	F()
	{
		i = 1;
		c = '1';
		p = "111";
	}
	void print()
	{
		std::cout << i << std::endl;
		std::cout << c << std::endl;
		std::cout << p << std::endl;
	}
	virtual void pp()
	{
		std::cout << "fuck1" << std::endl;
	}

  private:
	int i;
	char c;
	std::string p;
};

class FF : public F
{
  public:
	void pp()
	{
		std::cout << "fuck2" << std::endl;
	}
};

class TE
{
	std::string s;
};

void	f(std::string *i)
{
	std::cout << std::cin.eof() << "\n";
	if (std::getline(std::cin, *i).eof())
    {
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cin.clear();
    }
}

int	main(void)
{

	std::ifstream file("Makfile");


	return (0);
}