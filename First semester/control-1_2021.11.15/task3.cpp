#include <iostream>


using namespace std;

int main()
{
    int a = 0;
    int b = 0;

    cin >> a >> b;

    int a1 = a;
    int b1 = b;

    int NOD = 0;

    while(a != b)
    {
        if(a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
    
    NOD = a;

    int NOK = (a1 * b1) / NOD;

    cout << NOK << endl; 


    return EXIT_SUCCESS;
}