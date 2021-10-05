#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    int num = 1;

    cin >> n;

    while (n > 0)
    {
        num = num * 2;
        n = n - 1;
    }

    cout << num << endl;

    return EXIT_SUCCESS;
}