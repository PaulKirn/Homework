#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <time.h>

using namespace std;

int GetDay()
{
	struct tm newTime;
	time_t now = time(0);
	localtime_s(&newTime, &now);
	return newTime.tm_mday;
}

int main()
{

	//Task 1

	//const int s = 4;
	//int array[s][s];

	//for(int i = 0; i < s; i++)
	//{
	//	for (int j = 0; j < s; j++)
	//	{
	//		array[i][j] = i + j;
	//		cout << array[i][j];
	//	}
	//	cout << '\n';
	//}

	//Task 2

	cout << GetDay();
	
}