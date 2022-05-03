#include "mylib.h"

using namespace std;

int main()
{
    int c = 0;
    int n = 0;
    int R = 0;
    setlocale(LC_ALL, "Russian");

    cout << "Выберите, что сделать:" << endl;

    cout << "1. Вернуть число шагов, за которое введенное число будет возвращено к единице." << endl;

    cout << "2. Вывести окружность радиуса R с помощью *." << endl;

    cin >> c;

    if (c == 1)
    {
        cout << "Число шагов:" << endl;
        cin >> n;
        cout << Way_to_one(n, 0);
    }
    if (c == 2)
    {
        cout << "Вывод окружности:" << endl;
        cin >> R;
        circle(R);
    }
    return EXIT_SUCCESS;
}