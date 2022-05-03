#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    int sum = 0;
    int k = 0;

    cin >> n;

    while (n > 0)
    {
        cin >> k;

        sum = sum + k;

        --n;
    }

    cout << sum << endl;

    return EXIT_SUCCESS;
}