#include <iostream>

using namespace std;

int main()
{
    int n = 1;
    int k = 0;

    cin >> k;

    for (; n <= k; ++n)
    {
        if (k % n == 0)
        {
            cout << n << " ";
        }
    }

    return EXIT_SUCCESS;
}