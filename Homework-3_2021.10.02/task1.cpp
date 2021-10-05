#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    int fact = 1;
    int quality = 1;

    cin >> n;

    while (quality < n + 1)
    {
        fact = fact * quality;
        ++quality;
    }

    cout << fact << endl;

    return EXIT_SUCCESS;
}