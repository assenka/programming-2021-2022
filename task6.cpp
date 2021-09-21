#include <iostream>

using namespace std;

int main()
{
    int n = 0;

    cin >> n;

    int x = ((n & 1) == 0);

    cout << n + 1 + x << endl;

    return EXIT_SUCCESS;
}
