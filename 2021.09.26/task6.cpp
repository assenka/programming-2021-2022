#include <iostream>

using namespace std;

int main()
{
    int k1 = 0;
    int k2 = 0;
    int k3 = 0;
    int k4 = 0;

    cin >> k1 >> k2 >> k3 >> k4;

    if ((abs(k3 - k1) == abs(k4 - k2)) || (k3 - k1 == 0) || (k4 - k2 == 0))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return EXIT_SUCCESS;
}