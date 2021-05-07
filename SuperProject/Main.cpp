#include <iostream>
#include <string>
#include "Math.h"


int main()
{
	//Task 1
	for (int a = 0; a < 20; a++)
	{

		if (a % 2 != 0)
		{
			continue;
		}
		std::cout << a << "\n";
	}

	std::cout << " " << "\n";


	//Task2
	int n = 0;
	int a = 0;
	
	std::cout << "Enter the number of characters:";
	std::cin >> n;

	std::cout << "Enter '1' to display odd numbers, or '0' to display even numbers:";
	std::cin >> a;

	function(n, a);

}