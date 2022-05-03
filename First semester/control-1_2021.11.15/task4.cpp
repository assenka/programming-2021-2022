#include <iostream>

using namespace std;

int main()
{
    int N = 0;

    cin >> N;

    const int N1 = N;

    int arr[N1] = {};

    int arri = 0;

    for(int i = 0; i < N; i++)
    {
        cin >> arri;
        arr[i] = arri;
    }

    int max_arr = 0;
    int min_arr = 10*1000;

    for(int i = 0;i < N;i++)
    {
        if(arr[i] < min_arr)
        {
            min_arr = arr[i];
        }
        else if(arr[i] > max_arr)
        {
            max_arr = arr[i];
        }
    } 

    for(int i = 0;i < N;i++)
    {
        if(arr[i] == max_arr)
        {
            arr[i] = min_arr;
        }
        
    } 

    for(int i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;





    return EXIT_SUCCESS;
}