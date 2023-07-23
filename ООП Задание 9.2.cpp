// Создайте класс Transport (транспортное средство) и его дочерние классы Автомобиль, Повозка, Велосипед.
//Создайте методы для расчета времени и стоимости поездки.

#include <iostream>
#include"Automobile.h"
#include"Bicycle.h"
#include"Cart.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "Ru");
    int a = 1;
    while (a != 0) {
        cout << "Выберите для какого транспорта необходимо расчитать время и стоимость поездки:\n"
            <<"0. Завершить выбор.\n"
            <<"1. Автомобиль.\n"
            <<"2. Велосипед.\n"
            <<"3. Повозка.\n";
        cin >> a;
        switch (a)
        {
        case 0: {
            break;
        }
        case 1: {
            Automobile Car;
            float S, L, C;
            cout << "Введите расстояние которое должен проехать автомобиль: ";
            cin >> S;
            cout << "Введите расход топлива в литрах на 100км: ";
            cin >> L;
            cout << "Введите стоимость топлива: ";
            cin >> C;
            Car.Output(L, C, S);
        }
              break;
        case 2: {
            Bicycle Сycler;
            float S;
            cout << "Введите расстояние которое должен проехать велосипедист: ";
            cin >> S;
            Сycler.Output(S);
        }
              break;
        case 3: {
            Cart Сarriage;
            float S;
            cout << "Введите расстояние которое должена проехать повозка: ";
            cin >> S;
            Сarriage.Output(S);
        }
              break;
        default:cout << "Неправильно сделаный выбор!\n";
        }
    }
    return 0;
}
