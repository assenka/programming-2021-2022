#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    int k = 0;
    int n_fact = 1;
    int k_fact = 1;
    int nk_fact = 1;

    cin >> n >> k;

    int nk = n - k;

    if (nk > 0)
    {
        for (; nk > 0; --nk)
        {
            nk_fact = nk_fact * nk;
        }

        for (; n > 0; --n)
        {
            n_fact = n_fact * n;
        }

        for (; k > 0; --k)
        {
            k_fact = k_fact * k;
        }
    }
    cout << n_fact / (nk_fact * k_fact) << endl;

    return EXIT_SUCCESS;
}