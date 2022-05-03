#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    int l = 2;
    int num = 1;
    int now_l = 1;

    cin >> n;

    while (num <= n)
    {
        for (now_l; now_l < l; now_l++)
        {
            if (num <= n)
            {
            cout << num << " ";
            ++num;
            }
        }
 
        now_l = 1;
        ++l;
        cout  << endl;
    }


    return EXIT_SUCCESS;
}