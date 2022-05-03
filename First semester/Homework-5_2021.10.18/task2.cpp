#include <iostream>

using namespace std;

int main()
{
    double n = 0;
    
    cin >> n;

    long long value = *((long long*)&n);

   for (long long i = 0; i < sizeof(double) * 8; ++i)
	{
		long long bit = 0;
		long long one = 1;
		bit = ((one << ((sizeof(double) * 8) - i - 1)) & value) >> ((sizeof(double) * 8) - i - 1);
		cout << bit;
		if ((i + 1) % 4 == 0)
		{
			cout << " ";
		}
	}

cout << endl;

    return EXIT_SUCCESS;
}