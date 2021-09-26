#include <iostream>

using namespace std;

int main()
{
    int x = 0;
    int y = 0;                      // 1 <= x <= M <= 109
    int M = 0;                      // 1 <= y <= N <= 109
    int N = 0;

    cin >> M >> N >> x >> y;

    if (M == 1 && N > 1 || M > 1 && N == 1 || M > 1 && N > 1)
    {
        if (x + 1 <= M)
        {
            cout << x + 1 << " " << y << endl;
        }
        if (x - 1 > 0)
        {
            cout << x - 1 << " " << y << endl;
        }
        if (y + 1 <= N)
        {
            cout << x << " " << y + 1 << endl;
        }
        if (y - 1 > 0)
        {
            cout << x << " " << y - 1 << endl;
        }
    }

    return EXIT_SUCCESS;
}