void function(int n, int a)
{
	if (a < 0 || a > 1)
	{
		printf("WRONG NUMBER ENTERED\n");
	}
	else
	{
		for (int i = a; i < n; i += 2)
		{
			std::cout << i << "\n";
		}
	}
}








