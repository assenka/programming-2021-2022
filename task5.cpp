#include <iostream>

using namespace std;

int main()
{
    int x = 0;
    
    cin >> x;

    cout << (x % 10) + ((x / 10) % 10) + ((((x / 10) / 10)) % 10) << endl;

    return EXIT_SUCCESS;
}