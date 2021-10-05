#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    int k = 0;
    int plus = 0;
    int minus = 0;
    int zero = 0;

    cin >> n;

    while (n > 0)
    {
        cin >> k;

        if (k > 0)
        {
            ++plus;
        }
        else if (k < 0)
        {
            ++minus;
        }
        else if (k == 0)
        {
            ++zero;
        }
        --n;
    }

    cout << zero << " " << plus << " " << minus << endl; 

    return EXIT_SUCCESS;
}