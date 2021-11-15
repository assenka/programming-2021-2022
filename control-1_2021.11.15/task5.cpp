#include <iostream>

using namespace std;                            ///не сделано, но я хотела бы разобраться,
                                                //поэтому решила оставить пока что здесь 
int main()
{
    int N = 0;
    int M = 0;

    cin >> N >> M;

    const int N1 = N;
    const int M1 = M;

    int arr_n[N1] = {};
    int arr_m[M1] = {};
    int arr_finish[N1 + M1] = {};


    int k = 0;
    int sh = 0;

    for(int i = 0;i < N1; i ++)
    {
        cin >> k;
        arr_n[i] = k;
    }

    for(int i = 0;i < M1; i ++)
    {
        cin >> k;
        arr_m[i] = k;
    }

    for(int i = 0; i < N1; i++)
    {
        sh = 0;
        for (int j = 0; j < M1; j++)
        {
            if(arr_n[i] == arr_m[j])
            {
                sh += 1;
                arr_finish[i] = arr_n[i];
            }
        }
    }

    int ch = 0;

    for(int i = 0; i < M1+N1; i++)
    {
        ch = 0;
        for (int j = 0; j < M1+N1; j++)
        {
            if(arr_finish[i] == arr_finish[j] && ch > 1)    ///???
            {
                arr_finish[j] = 0;
            }
        }
    }


    

    for(int i = 0; i < M1+N1; i++)
    {
        cout << arr_finish[i] << " ";
    }



    return EXIT_SUCCESS;
}