#include <iostream>

using namespace std;

int main()
{
    int k = 0;
    int m = 0;
    int n = 0;
    int d = 0;

    cin >> k;
    
    const int z = k;
 
    int arr[z] = {};


    for(int i = 0; i < z; i++)
    {
        cin >> n >> m;

        d = 19 * m + (n + 239) * (n + 366) / 2;
        
        arr[i] = d;
        
    }


    for(int i = 0; i < z; i++)
    {
        cout << arr[i] << endl;
    }



    return EXIT_SUCCESS;
}