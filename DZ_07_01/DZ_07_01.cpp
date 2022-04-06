#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    //Пользователь вводит число. Определить количество цифр
    //в этом числе, посчитать их сумму и среднее арифметическое.
    //    Определить количество нулей в этом числе.Общение с поль -
    //    зователем организовать через меню.

    /*int user_number,counter = -1,counter_null = 0,sum = 0, a,user_chosen;

    cout << "Введите желаемое действие ( 1 - количество цифр в числе, 2 - Количество нулей," <<
        " 3 - сумма и среднеарифмитическое цифр): ";
    cin >> user_chosen;
    cout << "Введите желаемо число: ";
    cin >> user_number;

    switch (user_chosen) {
    case(1):
        while (user_number) {
            counter++;
            user_number /= 10;

        }
        cout << "Кол-во цифр в числе - " << counter+1;
        break;

    case(2):
        while (user_number) {
            if (user_number % 10 == 0)
                counter_null++;
            user_number /= 10;

        }
        cout << "Кол-во нулей в числе - " << counter_null;
        break;

    case(3):
        while (user_number) {
            a = user_number % 10;
            user_number /= 10;
            sum += a;
            counter++;

        }
        cout << "Сумма цифр = " << sum << endl;
        cout << "Среднеарифмитическое = " << sum / counter;

    }*/



    // Написать программу, которая выводит на экран шахматную
    // доску с заданным размером клеточки.

    /*int user_size;

    cout << " О прошу вас, досточтимый, задайте размерк клеточки - "; cin >> user_size;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << string(user_size, '*') << string(user_size,'-');
        }
        cout << endl;
        for (int t = 0; t < 4; t++) {
            cout << string(user_size,'-') << string(user_size,'*');
        }
        cout << endl;
    }*/


    //  Реализовать программу расчета заказа в кафетерии
    //  при условии, что заказ может быть на несколько человек и
    //  каждый клиент формирует свою часть заказа.Необходимо
    //  спросить у пользователя на сколько человек заказ.Далее
    //  каждому человеку выводиться меню(названия напитков,
    //      кондитерских изделий и их цена) и он выбирает.Предусмот -
    //  реть возможность выбора нескольких элементов меню для
    //  клиента, если он желает добавить еще что - то в свой заказ.
    //  Результат работы программы — итоговая сумма общего
    //  заказа всей компании.


    /*int people, person = 1;
    int drinks_num, drinks_quantity; // необходим для напитков и подсчёта суммы напитков
    int food_num, food_quantity; // аналогично напиткам
    float sum = 0,drinks_sum, food_sum; // сумма общая и отдельные

    cout << "На сколько душ заказ?\n";
    cin >> people;

    // цикл, определяющий кол-во раз показать меню (кол-во людей будут делать заказ)
    for (int i = 0; i < people; i++) {
        drinks_num = 1;
        food_num = 1;

        cout << "Приветствуем вас, человек №" << person << endl << endl;
        person++;

        cout << "_____МЕНЮ_____\n\n";
        cout << "_Напитки_\n";
        cout << "1.Вода| цена - 0,60$\n" << "2.Коньяк| цена - 10.50$\n" << "3.Лимонад| цена - 2,20$\n\n";
        cout << "_Кондитерские изделия_\n";
        cout << "1.Тортик шоколадный| цена - 7,40$\n" << "2.Маффин черничный| цена - 4,20$\n" << "3.Краусан галльский| цена - 12,60$\n\n";

        cout << "Ваш выбор напитков (чтобы остановить выбор, введите '0' в номер продукта).\n";
        while (drinks_num > 0) {
            cout << "Напиток - "; cin >> drinks_num;
            cout << "Кол-во - "; cin >> drinks_quantity;
            switch (drinks_num) {
            case(1):
                drinks_sum = drinks_quantity * 0.60;
                break;
            case(2):
                drinks_sum = drinks_quantity * 10.50;
                break;
            case(3):
                drinks_sum = drinks_quantity * 2.20;
                break;
            case(0):
                drinks_sum = 0;
                continue;
            }
            sum += drinks_sum;
        }

        cout << "Ваш выбор кондитерский изделий (чтобы остановить выбор, введите '0' в номер продукта).\n";
        while (food_num > 0) {
            cout << "Блюдо - "; cin >> food_num;
            cout << "Кол-во - "; cin >> food_quantity;
            switch (food_num) {
            case(1):
                food_sum = food_quantity * 7.40;
                break;
            case(2):
                food_sum = food_quantity * 4.20;
                break;
            case(3):
                food_sum = food_quantity * 12.60;
                break;
            case(0):
                food_sum = 0;
                continue;
            }
            sum += food_sum;
        }

        cout << " Итоговая сумма заказа = " << sum << "$";
    }*/

    // Есть пустое поле игры «Морской бой».
    // Вывести в консоль номера полей игры:
    // A0 B0 C0 D0 E0 F0 G0 H0 I0 J0
    // A1 B1 C1 D1 E1 F1 G1 H1 I1 J1
    // …..
    // A9 B9 C9 D9 E9 F9 G9 H9 I9 J9

char nums[10] = { '0','1','2','3','4','5','6','7','8','9' };
char letter[10] = { 'A','B','C','D','E','F','G','H','I','J' };

for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
        cout << letter[j] << nums[i] << " ";
    }
    cout << endl;
}
        
    
    
    
}
