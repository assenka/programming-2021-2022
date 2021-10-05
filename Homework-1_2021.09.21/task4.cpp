#include <iostream>

using namespace std;

int main()
{
    int l = 109;
    int t = 0;
    int v = 0;

    cin >> v >> t;

    if ((v > 0) && (v * t < 109))
    {
        cout << v * t << endl;
    } 

    if ((v > 0) && (v * t > 109))
    {
        cout << v * t - 109 << endl;
    } 

    else if (v < 0)
    {
        cout << l + v * t << endl;
    }
    

    return EXIT_SUCCESS;
}