#include <iostream>

using namespace std;

int main()
{
    int hour1 = 0;
    int minute1 = 0;
    int second1 = 0;
    int hour2 = 0;
    int minute2 = 0;
    int second2 = 0;

    cin >> hour1 >> minute1 >> second1 >> hour2 >> minute2 >> second2;

    cout << (hour2 * 60 * 60 + minute2 * 60 + second2) - (hour1 * 60 * 60 + minute1 * 60 + second1) << endl;

    return EXIT_SUCCESS;
}