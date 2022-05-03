#include <iostream>

using namespace std;

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;

    cin >> a >> b >> c;

    if ((a + b <= c) || (a + c <= b) || (c + b <= a) || (a <= 0) || (b <= 0) || (c <= 0))
    {
        cout << "impossible" << endl;
    }
    else if ((a * a + b * b == c * c) || (a * a + c * c == b * b) || (b * b + c * c == a * a))
    {
        cout << "right" << endl;
    }
    else if ((a * a + b * b > c * c) && c >= a && c >= b || (a * a + c * c > b * b) && b >= a && b >= c || (b * b + c * c >= a * a) && a >= b && a >= c)
    {
        cout << "acute" << endl;
    }
    else if ( (a * a + b * b < c * c) && c >= a && c >= b || (a * a + c * c < b * b) && b >= a && b >= c || (b * b + c * c < a * a) && a >= b && a >= c
    )
    {
        cout << "obtuse" << endl;
    }
    return EXIT_SUCCESS;
}