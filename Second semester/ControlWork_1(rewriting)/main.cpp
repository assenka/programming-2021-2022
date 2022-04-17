#include <iostream>
#include "int_arr.h"

using namespace std;

int main(){

    cout << "Добрый вечер, Григорий Анатольевич!!! Да! Оно не работает! Я не знаю, где и что идет не так, мои глаза не знали отдыха весь этот длинный день...Пощадите...(А лучше подскажите, пожалуйста, если вам не лень читать код, почему так происходит)" << endl;
    cout << "=("<< endl;

    IntArr arr1(13);

    arr1 += 12;

    cout << arr1;

    IntArr arr2(17);

    IntArr arr3(20);

    arr3 = arr1 + arr2;

    cout << arr3 << endl;

    return EXIT_SUCCESS;
}