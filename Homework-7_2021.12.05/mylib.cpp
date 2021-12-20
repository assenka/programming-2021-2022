#include "mylib.h"

using namespace std;
void circle(int R)
{
    for (int i = 0; i <= 2 * R; i++)
    {
        for (int j = 0; j <= 2 * R; j++)
        {
            if (((i - R) * (i - R) + (j - R) * (j - R) < R * R + R * 0.5) && ((i - R) * (i - R) + (j - R) * (j - R) > R * R - R * 0.5))
            {
                cout << " * ";
            }
            else {
                cout << "   ";
            }
        }
        cout << endl;
    }
}

int Way_to_one(int n, int step)
{
    if (n == 1)
    {
        return (step);
    }
    else if (n % 2 == 0)
    {

        return (Way_to_one(n / 2, step + 1));
    }
    else
    {
        return (Way_to_one((3 * n) + 1, step + 1));
    }
}