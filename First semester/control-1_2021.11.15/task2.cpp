#include <iostream>


using namespace std;

int main()
{
    cout << "Введите, пожалуйста, количество чисел, потому что я еще не умею читать произвольное количество символов:"<< endl;
    int N = 0;

    cin >> N;

    const int N1 = N;
    int k = 0;
    int arr[N1] = {};

    for(int i = 0; i < N1; i++)
    {
        cin >> k;
        arr[i] = k;
    }

    int sum_max = 0;
    int sum_min = 0;
    int g = 1;
    int h = 1;

    for(int i = 0;i < N1; i++)
    {
        if(arr[i] % 2 != 0)
        {   
            if (g == 1)
            {
                sum_min += arr[i];
                g += 1;
            }
            else if (sum_min > sum_min + arr[i])
            {
                sum_min += sum_min + arr[i];
                g += 1;
            }
        }
        else if (arr[i] % 2 == 0)
        {
            if (arr[i] > 0)
            {
            sum_max = sum_max + arr[i];
            h += 1;
            }
            else if (arr[i] < 0 && h == 1)
            {
                sum_max = sum_max + arr[i];
                h += 1;
            }
        }

    }

    cout << sum_max + sum_min << endl; 

    return EXIT_SUCCESS;
}
