#include <iostream>

int Rec(int i, int n, int step, int current) {
	return i < n ? Rec(i + 1, n, step, current + step) : current;
}

int main()
{
	int step = 4;
	int n = 4;
	std::cout << Rec(1, n, step, 0) << "\n";
	system("pause");
	return(0);
}