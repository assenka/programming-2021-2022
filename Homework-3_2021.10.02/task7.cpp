#include <iostream>

using namespace std;

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int x = 0;

    cin >> a >> b >> c >> d;

    for (;x <= 1000; ++x)
    {
        if(x * x * x * a + x * x * b + x * c + d == 0)
        {
            cout << x << " ";
        }
    }

    return EXIT_SUCCESS;
}