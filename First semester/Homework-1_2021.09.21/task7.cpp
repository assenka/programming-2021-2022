#include <iostream>

using namespace std;

int main()
{
    int a = 0;
    int b = 0;

    cin >> a >> b;
    
    int c = b;
    b = a;
    a = c;

    cout << a << " " << b << endl;

    return EXIT_SUCCESS;
}