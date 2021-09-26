#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    int m = 0;
    int k = 0;

    cin >> n >> m >> k;

    if ((n != 0) && (m != 0) && (k <= m * n) && ((k % n == 0) || (k % m == 0)))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }


    return EXIT_SUCCESS;
}