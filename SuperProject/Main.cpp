#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int main()
{

	//Task 1

	const int s = 4;
	int array[s][s];

	for(int i = 0; i < s; i++)
	{
		for (int j = 0; j < s; j++)
		{
			array[i][j] = i + j;
			cout << array[i][j];
		}
		cout << '\n';
	}



}