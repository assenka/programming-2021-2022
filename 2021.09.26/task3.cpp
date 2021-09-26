#include <iostream>

using namespace std;

int main()
{
    int k = 0;
    int m = 0;
    int n = 0;

    cin >> k >> m >> n;

    if (k > 0 && n > 0 && m > 0)
    {
        if (n % k != 0)
        {
            cout << n / k * 2 * m + 2 * m << endl;
        }
        else if (n % k == 0)
        {
            cout << n / k * 2 * m << endl;
        }
    }
    

    return EXIT_SUCCESS;
}