#include <iostream>

using namespace std;

int main()
{
    int a = 0;
    int b = 0;
    int n = 1;

    cin >> a >> b;

    for (; b >= a; ++a)
    {
        for (n; n <= a; ++n)
        {
            if (n * n == a)
            {
                cout << a << " ";
            }
        }
        n = 1;
    }

    return EXIT_SUCCESS;
}