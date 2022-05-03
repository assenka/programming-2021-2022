#include <iostream>

using namespace std;

int main()
{
    int number = 0;
    int m = 0;
    int n = 0;
    int bitmask_m = 0;
    int bitmask_n = 0;
    int M = 0;
    int N = 0;

    cin >> number >> m >> n;

    n = n - 1;
    m = m - 1;


    cout << "Изначальное число: " << number << endl;
    cout << "Его побитовое представление: ";

    for(int i = 0; i < sizeof(int) * 8; i++)
    {
        int currentBit = sizeof(int) * 8 - 1 - i;
        int bitMask = 1 << currentBit;
        int bit = bitMask & number;
        bit = bit >> currentBit;
        cout << bit;
        if((i + 1) % 4 == 0)
        {
            cout << " ";
        }

        if(i == m)
        {
            if(bit == 0)
            {
                bitmask_m = bitMask; 
            }
            else 
            {
                bitmask_m = bitMask & number;
                M += 1;
            }
        }
        if(i == n)
        {
            if(bit == 0)
            {
                bitmask_n = bitMask; 
            }
            else 
            {
                bitmask_n = bitMask & number;
                N += 1;
            }
        }
    }
    cout << endl;


    int all = bitmask_m | bitmask_n;
    int ALL = 0;

    if(M == N)
    {
        ALL = number;
    }
    else if (M != N)
    {
        ALL = all ^ number;
    }


    cout << "Новое число: " << ALL << endl;
    cout << "Его побитовое представление: ";

    for(int i = 0; i < sizeof(int) * 8; i++)
    {
        int currentBit = sizeof(int) * 8 - 1 - i;
        int bitMask = 1 << currentBit;
        int bit = bitMask & ALL;
        bit = bit >> currentBit;
        cout << bit;
        if ((i+1) % 4 == 0)
        {
            cout << " ";
        }
    }
    cout << endl;

    return EXIT_SUCCESS;
}