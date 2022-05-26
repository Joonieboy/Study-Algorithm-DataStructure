#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	int temp = 1;
	for (int i = 0; i <= N - 1; i++)
	{
		cout << temp++ << "\n";
	}
	return 0;
}
