#include <iostream>

using namespace std;

int main()
{
    int x = 0;
    int a = 0;

    cin >> x;

    a = x * x;

    cout << (a + 1) * (a + x) + 1 << endl;

    return EXIT_SUCCESS;
}